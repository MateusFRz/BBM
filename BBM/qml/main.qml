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

    Head {
        id: head
        anchors.top: parent.top
        z: 2
    }

    Rectangle {
        id: tap
        z: 2
        anchors.top: head.bottom
        height: tap1.height
        width: parent.width

        color: "#ffb59b"

        Row {
            leftPadding: parent.width / 10
            spacing: (parent.width - (leftPadding*2)) / 4

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

    Image {
        id: workSpace
        z: 1

        anchors.top: tap.bottom
        anchors.bottom: parent.bottom
        width: parent.width

        source: "ressources/wood-texture.jpg"

        Glass {
            z: 1
        }
    }


}




