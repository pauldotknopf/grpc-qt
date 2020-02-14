#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtest1.h>
#include <types-qt.pb.h>
#include <types-qt-creator.pb.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<QTest1>("interop", 1, 0, "Test1");
    qmlRegisterType<custom::types::QTestMessageRequest>("interop", 1, 0, "QTestMessageRequest");
    qmlRegisterType<custom::types::QTestMessageResponse>("interop", 1, 0, "QTestMessageResponse");

    qmlRegisterSingletonType<custom::types::QTypesCreator>("interop", 1, 0, "TypesCreator", [](QQmlEngine *engine, QJSEngine *scriptEngine) -> QObject * {
        Q_UNUSED(engine)
        Q_UNUSED(scriptEngine)

        return new custom::types::QTypesCreator();
    });

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
