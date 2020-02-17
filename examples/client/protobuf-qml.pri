QT += quick-private qml-private

DEFINES += PROTOBUF_QML_DISABLE_SERIALIZE

INCLUDEPATH += $$PWD/third_party/protobuf-qml/lib/
INCLUDEPATH += $$PWD/third_party/protobuf-qml/compiler
HEADERS += \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/descriptors.h \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/v4/descriptor.h \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/v4/v4util.h \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/conversions.h

SOURCES += \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/descriptors.cpp \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/v4/descriptor.cpp \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/v4/v4util.cpp \
    $$PWD/third_party/protobuf-qml/lib/protobuf/qml/conversions.cpp

RESOURCES += qml.qrc
