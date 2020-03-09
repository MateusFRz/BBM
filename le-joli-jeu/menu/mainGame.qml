import QtQuick 2.13
import QtQuick.Window 2.13
import QtQuick.Controls 2.5

Window {
    id : wido
    width: maximumWidth
    height: maximumHeight
    visible: true

    Column {
        id: column
        width: parent.width
        height: parent.height
        spacing : 20

        Column {
            id: column1
            width: parent.width/2
            height: button.height
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            spacing: parent.height/6

            Button {
                id: play
                text: qsTr("Jouer")
                font.pointSize: play.width/10
                width: parent.width
                height: play.width/4
                onClicked: {
                    var component = Qt.createComponent("menu/gameMenu.qml")
                    var window    = component.createObject(wido)
                    wido.close()
                    window.show()

                }

            }

            Button {
                id: apm
                text: qsTr("Fast & Service")
                font.pointSize: apm.width/10
                width: parent.width
                height: apm.width/4



            }

            Button {
                id: notebook
                text: qsTr("NoteBook")
                font.pointSize: notebook.width/10
                width: parent.width
                height: notebook.width/4

            }
        }
    }



}


