TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    car.cpp \
    carnode.cpp \
    carlist.cpp \
    client.cpp \
    clientlist.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    car.h \
    carnode.h \
    carlist.h \
    client.h \
    clientlist.h

