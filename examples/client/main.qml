import QtQuick 2.12
import QtQuick.Controls 2.5
import interop 1.0

ApplicationWindow {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Stack")

    Timer {
        running: true
        repeat: true
        interval: 10
        onTriggered: {
            gc()
            console.log("done..")
            var test = GenCreator.createTest1PropComplexSetRequest();
            var value = test.getValue()
            value.value2 = "sdfsfd"
            console.log(value.value2)

            test.setValue(value)

            value = test.getValue()

            console.log(value.value2)

        }
    }

    Component.onCompleted: {

    }
}
