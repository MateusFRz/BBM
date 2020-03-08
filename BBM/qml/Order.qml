import QtQuick 2.0

Rectangle {
    id: container
    height: 50
    width: 150

    Rectangle {
        id: wait
        height: parent.height
        color: "red"


        Connections {
            target: order

            onTimeChanged: {
                var w = container.width
                var r = w / (order.time/60)

                wait.width = r
            }
        }

    }

    Text {
        id: title
        text: "Title: " + order.beer().name
    }

    Text {
        id: timeReaming
        anchors.top: title.bottom
        text: "Time: " + Qt.formatTime(new Date(0, 0, 0, 0, 0, order.time/60), "ss") + " sec"
    }
}
