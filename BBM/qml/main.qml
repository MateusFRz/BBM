import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World") 

    Text {
        focus: true
        Keys.onPressed: keyEventTYP;/*{
            console.log("===> ", event.key)
            console.log("===> ", event)
        }*/
    }
}
