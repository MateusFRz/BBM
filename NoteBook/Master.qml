import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3


ScrollView {
    width: parent.width
    height: parent.height
    ScrollBar.horizontal.policy: ScrollBar.AlwaysOn
    ScrollBar.vertical.policy: ScrollBar.AlwaysOn
    ScrollBar.horizontal.interactive: true
    ScrollBar.vertical.interactive: true
    clip: true
    ListView {
        id: list        
        objectName: "list"
        antialiasing: true
        width: parent.width
        clip: true
        focus: true
        highlight: Rectangle { color: "lightsteelblue"; radius: 5 ; width: parent.width;}
        onCurrentIndexChanged: {
              aleModel.beer = Qt.binding( function() { return model.getBeer(currentIndex) } )
        }

        model: modelBeer


        delegate: ItemDelegate {
            Text {
                id:item
                text: " "+name
                 width: parent.width
            }

            MouseArea {
                anchors.fill: parent
                onClicked: list.currentIndex = index
            }
        }
    }
}
