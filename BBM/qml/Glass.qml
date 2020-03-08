import QtQuick 2.0

Rectangle {
    antialiasing: true
    rotation: drink.angle

    width: 100
    height: 200
    border.color: "black"
    border.width: 3
    color: "transparent"
    x: drink.x
    y: drink.y

    // Foam Indicator
    Rectangle {
        antialiasing: true
        color: "black"
        height: 2
        width: parent.width
        z: 1

        y: parent.height * 0.05
    }


    Rectangle {
        antialiasing: true
        color: "black"
        height: 2
        width: parent.width
        z: 1

        y: parent.height * 0.20
    }

    // Foam
    Rectangle {
        antialiasing: true
        anchors.bottom: beer.top
        height: drink.foam().quantity * parent.height / 100

        width: parent.width
        color: drink.foam().color
    }

    // Beer
    Rectangle {
        antialiasing: true
        id: beer
        anchors.bottom: parent.bottom
        height: drink.beer().quantity * parent.height / 100

        width: parent.width
        color: drink.beer().color
    }
}

