import QtQuick 2.0

Rectangle {
    height: 50
    width: parent.width
    color: "#ffaa00"

    Rectangle {
        x: parent.width/2 - (width/2)
        height: parent.height
        width: 200
        color: "#b96400"

        Text {
            x: parent.width/2 - (width/2)

            font.bold: true
            font.pointSize: 20
            color: "white"

            text: Qt.formatTime(new Date(0, 0, 0, 0, 0, fas.time/60), "mm:ss")
        }
    }

    Rectangle {
        height: parent.height
        width: 200
        color: "#b96400"

        Text {
            id: points

            font.bold: true
            font.pointSize: 20

            text: "Points: " + player.point
            color: "white"

            Connections {
                target: player
                onSuccess:  {
                    points.color = "green";

                }

                onFailed: {
                    points.color = "red";
                }
            }
        }
    }

    Order {
        anchors.right: parent.right
    }
}
