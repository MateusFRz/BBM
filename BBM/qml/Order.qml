import QtQuick 2.0

Rectangle {
    id: container
    height: 50
    width: 150
    color: "#be7740"

    Rectangle {
        id: wait
        height: parent.height
        color: "#ff3030"

        Connections {
            target: order

            onTimeChanged: {
                let w = container.width
                let r = w / (order.time/60 > 1 ? order.time/60 : 1)

                wait.width = r
            }
        }

    }

    Text {
        id: title

        text: "Title: " + order.beer().name
        color: "white"
        font.pointSize: 15
    }

    Text {
        id: timeReaming
        anchors.top: title.bottom

        text: "Time: " + Qt.formatTime(new Date(0, 0, 0, 0, 0, order.time/60), "ss") + " sec"
        color: "white"
        font.pointSize: 15
    }
}
