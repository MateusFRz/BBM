import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


ScrollView {
    width: parent.width
    ListView {
        id: list        
        objectName: "list"
        width: parent.width
        antialiasing: true
        highlight: Rectangle { color: "lightsteelblue"; radius: 5 ; width: parent.width}
        onCurrentIndexChanged: {
              aleModel.beer = Qt.binding( function() { return model.getBeer(currentIndex) } )
        }

        model: modelBeer


        delegate: ItemDelegate {
            Text {
                text: " "+name
                 width: parent.width

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
