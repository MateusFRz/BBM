import QtQuick 2.0

Rectangle {
    rotation: drink.angle

    width: 100
    height: 200
    border.color: "black"
    x: drink.x
    y: drink.y

    // Foam Indicator
    Rectangle {
        color: "black"
        height: 2
        width: parent.width
        z: 1

        y: parent.height * 0.05
    }


    Rectangle {
        color: "black"
        height: 2
        width: parent.width
        z: 1

        y: parent.height * 0.20
    }

    // Foam
    Rectangle {
        anchors.bottom: beer.top
        height: drink.foam().quantity * parent.height / 100

        width: parent.width
        color: drink.foam().color
    }

    // Beer
    Rectangle {
        id: beer
        anchors.bottom: parent.bottom
        height: drink.beer().quantity * parent.height / 100

        width: parent.width
        color: drink.beer().color
    }
}

