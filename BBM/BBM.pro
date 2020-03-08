QT += quick

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Refer to the documentation for the
# deprecated API to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fas/drink.cpp \
    fas/fasgame.cpp \
    fas/liquid.cpp \
    fas/player.cpp \
    fas/tap.cpp \
    game/game.cpp \
        main.cpp \
    metier/bar.cpp \
    metier/beer.cpp \
    metier/ingredient.cpp \
    fas/order.cpp \
    fas/ordergenerator.cpp \
    metier/recipe.cpp \


RESOURCES += \
    qml/qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    fas/header/drink.h \
    fas/header/fasgame.h \
    fas/header/liquid.h \
    fas/header/player.h \
    fas/header/tap.h \
    game/header/game.h \
    metier/header/bar.h \
    metier/header/beer.h \
    metier/header/beertype.h \
    metier/header/ingredient.h \
    fas/header/order.h \
    fas/header/ordergenerator.h \
    metier/header/recipe.h \
    metier/header/type.h \

DISTFILES += \
    qml/main.qml
