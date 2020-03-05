import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Column{

    spacing: columnSpacing
    antialiasing: true

    property var ht: {if (parent.height/6 >= 25) parent.height/6; else 25}
    property var wd: {if (parent.width/6 >= 25) parent.width/6; else 25}

    property var rowSpacing: 5
    property var columnSpacing: 5

    Row{
        height: ht
        width: wd
        Label{
            width: wd
            id: labelName
            objectName: "labelName"
            text: "<b>Nom</b>"
        }

        Text {
            id: name
            objectName: "name"
            text: aleModel.beer?aleModel.beer.name:"null"
        }
    }

    Row{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelVol
            objectName: "labelVol"
            text: "<b>Vol %</b>"
        }

        Text {
            id: vol
            objectName: "vol"
            text: aleModel.beer?aleModel.beer.alcoholeLevels/10:"null"

        }

    }

    Row{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelType
            objectName: "labelType"
            text: "<b>Type</b>"
        }

        Text {
            id: type
            objectName: "type"
            text:aleModel.beer?aleModel.beer.type:"null"
        }
    }

    Row{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelDensite
            objectName: "labelDensite"
            text: "<b>Densite</b>"
        }

        Text {
            id: densite
            objectName: "densite"
            text:aleModel.beer?aleModel.beer.density:"null"
        }
    }
}

