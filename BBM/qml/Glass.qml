import QtQuick 2.0

Rectangle {
    focus: true
    rotation: drink.angle
    Keys.onPressed: drink.moveDrink(event.key)
    x: drink.positionX
    y: drink.positionY
    width: 100
    height: 200
    border.color: "black"
}

