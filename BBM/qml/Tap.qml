import QtQuick 2.0

Image {
    width: 100
    height: 100
    Keys.onPressed: fas.serveDrink(event.key)
    source: "qrc:/ressources/robinet.png"
}
