import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.12
Window {
    visible: true
    width: 1024
    height: 720
    title: qsTr("Hello World")

    Rectangle {
        id: eventCatcher
        focus: true
        Keys.onPressed: {
            drink.moveDrink(event.key);
            if (!event.isAutoRepeat) fas.keyEventListener(event.key);
        }
    }

    Text {
        z: 10
        x: 500
        text: "Time: " + Qt.formatTime(new Date(0, 0, 0, 0, 0, fas.time/60), "mm:ss")
    }

    Text {
        id: p
        z: 10
        x: 700
        text: "Points: " + player.point
        color: "black"

        Connections {
            target: player
            onSuccess:  {
                p.color = "green";

            }

            onFailed: {
                p.color = "red";
            }
        }
    }

    Order {
        z: 10
        x: 800
    }

    Rectangle {
        id: tap
        z: 2
        anchors.top: parent.top
        height: tap1.height
        width: parent.width

        Row {

            Tap {
                id: tap1
                border.color: "red"
                border.width: {
                    if (fas.tapSelected == 0)
                        5
                    else 0
                }
                Liquid {
                    visible: tapObject0.actif
                }
            }
            Tap {
                id: tap2
                border.color: "red"
                border.width: {
                    if (fas.tapSelected == 1)
                        5
                    else 0
                }
                Liquid {
                    visible: tapObject1.actif
                }
            }
            Tap {
                id: tap3
                border.color: "red"
                border.width: {
                    if (fas.tapSelected == 2)
                        5
                    else 0
                }
                Liquid {
                    visible: tapObject2.actif
                }
            }
            Tap {
                id: tap4
                border.color: "red"
                border.width: {
                    if (fas.tapSelected == 3)
                        5
                    else 0
                }
                Liquid {
                    visible: tapObject3.actif
                }
            }
        }
    }

    Rectangle {
        id: workSpace
        z: 1
        anchors.top: tap.bottom
        anchors.bottom: parent.bottom
        width: parent.width
        color: "blue"

        Glass {
            z: 1
        }
    }


}




