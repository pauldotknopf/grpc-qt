#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <qtest1.h>
#include <types-qt.pb.h>
#include <types-qt-creator.pb.h>
#include <gen-qt-creator.pb.h>
#include <protobuf/qml/descriptors.h>

QObject* descriptorPoolFactory(QQmlEngine*, QJSEngine*) {
  return new protobuf::qml::DescriptorPoolWrapper;
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //engine.addImportPath("qrc:/modules/");
    //engine.addImportPath("qrc:/modules/Protobuf/");
    engine.addImportPath("qrc:///modules");

    qmlRegisterSingletonType<protobuf::qml::DescriptorPoolWrapper>(
          "Protobuf", 1, 0, "DescriptorPool", descriptorPoolFactory);
    qmlRegisterUncreatableType<protobuf::qml::FileDescriptorWrapper>(
          "Protobuf", 1, 0, "FileDescriptor", "FileDescriptor is abstract type.");
    qmlRegisterUncreatableType<protobuf::qml::DescriptorWrapper>(
          "Protobuf", 1, 0, "Descriptor", "Descriptor is abstract type.");

    qmlRegisterType<QTest1>("interop", 1, 0, "Test1");
    //qmlRegisterType<custom::types::QTestMessageRequest>("interop", 1, 0, "QTestMessageRequest");
    qmlRegisterType<custom::types::QTestMessageResponse>("interop", 1, 0, "QTestMessageResponse");
    //qmlRegisterType<Tests::QTest1PropComplexSetRequest>("interop", 1, 0, "QTest1PropComplexSetRequest");

    qmlRegisterSingletonType<custom::types::QTypesCreator>("interop", 1, 0, "TypesCreator", [](QQmlEngine *engine, QJSEngine *scriptEngine) -> QObject * {
        Q_UNUSED(engine)
        Q_UNUSED(scriptEngine)

        return new custom::types::QTypesCreator();
    });

    qmlRegisterSingletonType<Tests::QGenCreator>("interop", 1, 0, "GenCreator", [](QQmlEngine *engine, QJSEngine *scriptEngine) -> QObject * {
        Q_UNUSED(engine)
        Q_UNUSED(scriptEngine)

        return new Tests::QGenCreator();
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
