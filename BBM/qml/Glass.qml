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

        y: parent.height * 0.08
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
    Image {

        antialiasing: true
        smooth: true

        anchors.bottom: beer.top
        height: drink.foam().quantity * parent.height / 100
        width: parent.width - (parent.border.width*2)
        x: parent.border.width

        source: "ressources/foam-texture.png"
    }

    // Beer
    Image {
        id: beer

        antialiasing: true
        smooth: true

        anchors.bottom: parent.bottom
        height: drink.beer().quantity * parent.height / 100
        width: parent.width - (parent.border.width*2)
        x: parent.border.width

        anchors.bottomMargin: parent.border.width

        source: {
            switch (fas.tapSelected) {
                case 0:
                    "ressources/beer-texture.jpg"
                    break;
                case 1:
                    "ressources/beer-amber-texture.jpg"
                    break;
                case 2:
                    "ressources/beer-stout-texture.png"
                    break;
                case 3:
                    "ressources/beer-white-texture.png"
                    break;
            }
        }
    }
}

