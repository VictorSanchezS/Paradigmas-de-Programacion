TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    client.cpp \
    clientnode.cpp \
    clientslist.cpp \
    dataseed.cpp \
    basics.cpp \
    hotel.cpp \
    menu.cpp \
    room.cpp \
    roomslist.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    client.h \
    clientnode.h \
    clientslist.h \
    dataseed.h \
    basics.h \
    hotel.h \
    menu.h \
    room.h \
    roomslist.h

