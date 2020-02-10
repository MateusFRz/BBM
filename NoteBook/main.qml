import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


ApplicationWindow {
    id: appwindow
    visible: true
    width: 640
    height: 250
    minimumWidth: 600
    minimumHeight: 250
    title: qsTr("NoteBook")

    Item {
        id: size
        property var ht: parent.height/5
        property var ht2: 25
        property var wd: parent.width/4
        property var wd2: 100
        property var labelWd: 25
        property var txtInLgt: 20
        property var master: 100

    }
    Item{
        id:str
        property string name: "<b> Name: </b>"
        property string vol: "<b>Vol%: </b>"
        property string type: "<b>Type: </b>"
        property string dens: "<b>Densite: </b>"
        property string addBeer: "Add Beer"
        property string val: "Valider"
        property string sup: "Supprimer"
    }

    Item{
        id: mydata
        property  var beer: modelBeer.data(list.currentIndex)
        property var name: qsTr("%1").arg(modelBeer.data(list.currentIndex,0))//myModel.get(list.currentIndex).name
        //property var type: qsTr("%1").arg(modelBeer.data(list.currentIndex,1)) //myModel.get(list.currentIndex).type
        property var type: modelBeer.data(list.currentIndex,1)
        property var densite: ""//myModel.get(list.currentIndex).dens
        property var volume: "" //myModel.get(list.currentIndex).vol /10
        property var volumeInt: "" //myModel.get(list.currentIndex).vol
    }

    Rectangle{
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        id: master
        width: size.master
        height: parent.height
        border.color: 'black'
        color: 'transparent'
        focus: true

        ScrollView {
            anchors.fill: parent
            anchors.bottom: bpAdd

            ListView {
                id: list
                objectName: "list"
                width: parent.width
                antialiasing: true
                highlight: Rectangle { color: "lightsteelblue"; radius: 5 }


                model: modelBeer


                delegate: ItemDelegate {
                    Text {
                        text: name

                    }


                    MouseArea {
                        anchors.fill: parent
                        onClicked: list.currentIndex = index
                    }

                }
                clip: true
                focus: true

            }


        }
        Button{
            anchors.right: parent.right; anchors.bottom: parent.bottom;
            id: bpAdd
            objectName: "bpAdd"
            text: str.addBeer

            onClicked: {
                console.debug("Add Beer")
            }
        }

        TabBar{
            id: mybar
            height: 42
            anchors.leftMargin: 0
            anchors.topMargin: 0
            anchors.rightMargin: -540
            anchors.top: parent.top
            anchors.left: master.right
            anchors.right: parent.right


            TabButton {
                text: qsTr("Home")
            }

            TabButton {
                text: qsTr("Editor")
            }
        }

        StackLayout {
            currentIndex: mybar.currentIndex
            anchors.left: master.right
            anchors.right: parent.right
            anchors.top: mybar.bottom
            anchors.bottom: parent.bottom

            Item {
                id: homeTab

                Grid{

                    anchors{
                        fill: parent
                        leftMargin: 10
                        rightMargin: 10
                        topMargin: 10
                        bottomMargin: 10
                    }

                    columns: 2
                    spacing: 2
                    id: gridDetail
                    antialiasing: true


                    RowLayout{
                        height: size.ht
                        width: size.wd
                        Label{
                            width: size.labelWd
                            id: labelName
                            objectName: "labelName"
                            text: str.name
                        }

                        Text {
                            id: name
                            objectName: "name"
                            //text:mydata.name
                            text: mydata.beer.name
                            Component.onCompleted: {
                                console.log("=====> ")
                                console.log(list.currentIndex)
                                console.log(mydatssa.beer)
                                console.log( modelBeer.data(0).name )
                            }
                        }
                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Label{
                            width: size.labelWd
                            id: labelVol
                            objectName: "labelVol"
                            text: str.vol
                        }

                        Text {
                            id: vol
                            objectName: "vol"
                            text: mydata.volume

                        }

                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Label{
                            width: size.labelWd
                            id: labelType
                            objectName: "labelType"
                            text: str.type
                        }

                        Text {
                            id: type
                            objectName: "type"
                            text:mydata.type
                        }
                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Label{
                            width: size.labelWd
                            id: labelDensite
                            objectName: "labelDensite"
                            text: str.dens
                        }

                        Text {
                            id: densite
                            objectName: "densite"
                            text:mydata.densite
                        }
                    }
                }
            }

            Item {
                id: editorTab

                Grid{

                    anchors{
                        top: parent.top
                        left: parent.left
                        right: parent.right
                        leftMargin: 10
                        rightMargin: 10
                        topMargin: 10
                        bottomMargin: 10
                    }

                    horizontalItemAlignment: Grid.AlignLeft
                    verticalItemAlignment: Grid.AlignVCenter
                    columns: 2
                    spacing: 2
                    id: grid
                    antialiasing: true

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Text {
                            width: size.labelWd
                            id: labelNameD
                            objectName: "labelName"
                            text: str.name
                        }

                        Rectangle{
                            border.color: "black"
                            color: "transparent"
                            height: size.ht2
                            width: size.wd2

                            TextInput{
                                id: nameD
                                anchors.centerIn: parent
                                objectName: "name"
                                text: mydata.name
                                maximumLength: size.txtInLgt
                            }
                        }
                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Text {
                            width: size.labelWd
                            id: labelVolD
                            objectName: "labelVol"
                            text: str.vol
                        }

                        Rectangle{
                            border.color: "black"
                            color: "transparent"
                            height: size.ht2
                            width: size.wd2

                            TextInput{

                                id: volD
                                objectName: "vol"
                                anchors.centerIn: parent
                                text: mydata.volume
                                onTextChanged: {
                                    if(text != data.volume) console.debug("textInput:",text);
                                }

                            }
                        }
                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Text {
                            width: size.labelWd
                            id: labelTypeD
                            objectName: "labelType"
                            text: str.type
                        }

                        Rectangle{
                            border.color: "black"
                            color: "transparent"
                            height: size.ht2
                            width: size.wd2

                            TextInput{
                                id: typeD
                                objectName: "type"
                                anchors.centerIn: parent
                                text:mydata.type
                                maximumLength: size.txtInLgt

                            }
                        }
                    }

                    Slider {
                        id: slideVol
                        from:0
                        to: 300
                        stepSize: 1
                        value: mydata.volumeInt
                        onValueChanged: {if(value != data.volumeInt) console.debug("slider:",value/10);}
                    }

                    RowLayout{

                        height: size.ht
                        width: size.wd

                        Text {
                            width: size.labelWd
                            id: labelDensiteD
                            objectName: "labelDensite"
                            text: str.dens
                        }

                        Rectangle{
                            border.color: "black"
                            color: "transparent"
                            height: size.ht2
                            width: size.wd2

                            TextInput{
                                id: densiteD
                                objectName: "densite"
                                anchors.centerIn: parent
                                text: mydata.densite
                                maximumLength: size.txtInLgt

                            }
                        }
                    }
                }

                RowLayout{
                    id: bpLayout
                    anchors{
                        bottom: parent.bottom
                        right: parent.right
                        rightMargin: -540
                    }

                    Button {

                        id: bpSup
                        objectName: "bpSup"
                        text: str.sup

                        onClicked: {
                            console.debug("Supprimer")
                        }
                    }

                    Button {

                        id: bpVal
                        objectName: "bpVal"
                        text: str.val

                        onClicked: {
                            console.debug("Valider")
                        }
                    }
                }

            }
        }
    }
}


