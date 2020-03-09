import QtQuick 2.13
import QtQuick.Window 2.13
import QtQuick.Controls 2.5


Window{

    id : wido
    width: maximumWidth
    height: maximumHeight
    visible: true

    Column {
        id: column
        width: parent.width
        height: parent.height


        Column {
            id: column1
            width: parent.width/2
            height: parent.height/2
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            spacing: parent.height/6

            Button {
                id: newGame
                text: qsTr("Nouvelle Partie")
                font.pointSize: newGame.width/10
                width: parent.width
                height: newGame.width/4
                onClicked: {
                    var component = Qt.createComponent("qrc:game/bbm/gameGui.qml")
                    var window    = component.createObject(wido)
                    console.log(window)
                    wido.close()
                    window.show()


                }

            }

            Button {
                id: loadGame
                text: qsTr("Charger Partie")
                font.pointSize: loadGame.width/10
                width: parent.width
                height: loadGame.width/4
                onClicked: {
                    var component = Qt.createComponent("qrc:menu/gameLoader.qml")
                    var window    = component.createObject(wido)
                    wido.close()
                    window.show()

                }



            }


        }
    }
}


