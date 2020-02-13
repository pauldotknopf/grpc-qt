#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtest1.h>
#include <types-qt.pb.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<QTest1>("interop", 1, 0, "Test1");
    qmlRegisterType<QTestMessageRequest>("interop", 1, 0, "QTestMessageRequest");
    qmlRegisterType<QTestMessageResponse>("interop", 1, 0, "QTestMessageResponse");

    QTestMessageRequest request;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);

    engine.load(url);

    return app.exec();
}
