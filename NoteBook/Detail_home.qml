import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.3

Grid{

    columns: 2
    spacing: columnSpacing
    antialiasing: true

    property var ht: {if (parent.height/6 >= 25) parent.height/6; else 25}
    property var wd: {if (parent.width/6 >= 25) parent.width/6; else 25}

    property var rowSpacing: 5
    property var columnSpacing: 5

    RowLayout{
        height: ht
        width: wd
        Label{
            width: wd
            id: labelName
            objectName: "labelName"
            text: "labelName"
        }

        Text {
            id: name
            objectName: "name"
            text: aleModel.beer?aleModel.beer.nom:"null"
        }
    }

    RowLayout{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelVol
            objectName: "labelVol"
            text: "labelVol"
        }

        Text {
            id: vol
            objectName: "vol"
            text: aleModel.beer?aleModel.beer.vol/10:"null"

        }

    }

    RowLayout{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelType
            objectName: "labelType"
            text: "labelType"
        }

        Text {
            id: type
            objectName: "type"
            text:aleModel.beer?aleModel.beer.type:"null"
        }
    }

    RowLayout{

        height: ht
        width: wd

        Label{
            width: wd
            id: labelDensite
            objectName: "labelDensite"
            text: "labelDensite"
        }

        Text {
            id: densite
            objectName: "densite"
            text:aleModel.beer?aleModel.beer.densite:"null"
        }
    }
}

