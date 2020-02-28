import QtQuick 2.12
import QtQuick.Window 2.11
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Window {
    visible: true
    width: 640
    height: 480
    minimumWidth: 480
    minimumHeight: 240
    title: qsTr("NoteBookBiere")

    Row{
        anchors.fill: parent
        focus: true
        spacing: 5

        id:aleModel
        property var beer : null


        Rectangle{
            width: parent.width - detail.width
            id:master
            height: parent.height
            border.color: "black"

            Column{
                spacing: 2
                width: parent.width
                height: parent.height

                Master{width: parent.width; height: parent.height - bpAdd.height
                }

                Button{
                    width: parent.width
                    id: bpAdd
                    objectName: "bpAdd"
                    text: "bpAdd"

                    onClicked: {
                        console.debug("Add Beer")
                    }
                }
            }
        }


        Rectangle{
            width: parent.width/(1.2)
            height: parent.height
            id:detail

            Column{
                spacing: 2
                anchors.fill:parent

                TabBar{
                    id: mybar
                    height: 42
                    width: parent.width


                    TabButton {
                        text: qsTr("Home")
                    }

                    TabButton {
                        text: qsTr("Editor")
                    }
                }
                StackLayout {
                    currentIndex: mybar.currentIndex
                    height: parent.height - mybar.height
                    width: parent.width


                    Item {
                        id: homeTab

                        Detail_home{}
                    }
                    Item {
                        id: editorTab                        

                        Column{
                            spacing: 2
                            width: parent.width
                            height: parent.height

                            Detail_editor{height: parent.height - bpEdit.height}
                            Button_editor{
                                id: bpEdit
                                anchors.right: parent.right
                            }
                        }
                    }
                }
            }
        }
    }
}
