import QtQuick 2.12
import QtQuick.Controls 2.5
import interop 1.0

import 'proto-qml/types.pb.js' as Types

//import Protobuf 1.0 as PB

ApplicationWindow {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("Stack")

//    Yo {

//    }

    Test1 {
        id: test1
    }

    Timer {
        running: true
        repeat: true
        interval: 1000
        onTriggered: {
            //var t = new Types.TestMessageRequest({})
            //console.log(PB.Message.createMessageType("null", null))
            //var r = Protobuf.Message;
            var r = new Types.TestMessageRequest({});
            r.value1 = 3;
            test1.test(r);

//            gc()
//            console.log("done..")
//            var test = GenCreator.createTest1PropComplexSetRequest();
//            var value = test.getValue()
//            value.value2 = "sdfsfd"
//            console.log(value.value2)

//            test.setValue(value)

//            value = test.getValue()

//            console.log(value.value2)

        }
    }

    Component.onCompleted: {

    }
}
