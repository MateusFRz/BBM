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

QMAKE_CXXFLAGS += -Wno-unused-function

SOURCES += \
    game/game.cpp \
        main.cpp \
    metier/bar.cpp \
    metier/beer.cpp \
    metier/ingredient.cpp \
    metier/order.cpp \
    metier/recipe.cpp \
    metier/header/enumeration/enumtool.cpp \
    model/gamemodel.cpp \
    metier/brewery.cpp


RESOURCES += \
    qml/qml.qrc

# Additional import path used to resolve QML modules in Qt Creators code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    game/header/game.h \
    metier/header/bar.h \
    metier/header/beer.h \
    metier/header/ingredient.h \
    metier/header/order.h \
    metier/header/recipe.h \
    metier/header/enumeration/beertype.h \
    metier/header/enumeration/baraddress.h \
    metier/header/enumeration/ingredienttype.h \
    model/header/gamemodel.h \
    metier/header/brewery.h

DISTFILES += \
    qml/main.qml
