TEMPLATE = app

QT += qml quick

SOURCES += main.cpp \
    UIBridge.cpp \
    Adapter.cpp \
    ReadDataFromServer.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    UIBridge.h \
    Adapter.h \
    ReadDataFromServer.h
