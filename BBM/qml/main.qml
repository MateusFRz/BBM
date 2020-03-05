import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 1024
    height: 720
    title: qsTr("Hello World")

    Rectangle {
        id: tap
        anchors.top: parent.top
        height: tap1.height
        width: parent.width

        Tap {
            id: tap1
            y:0
            x:350
        }
        Tap {
            id: tap2
            y:0
            x:500
        }
        Tap {
            id: tap3
            y:0
            x:650
        }
    }

    Rectangle {
        id: workSpace
        anchors.top: tap.bottom
        anchors.bottom: parent.bottom
        width: parent.width
        color: "blue"

        Glass {}
    }
}




