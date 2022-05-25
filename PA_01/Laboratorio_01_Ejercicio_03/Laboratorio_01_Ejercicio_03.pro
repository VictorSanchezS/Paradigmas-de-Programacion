TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    car.cpp \
    carnode.cpp \
    carlist.cpp \
    client.cpp \
    clientlist.cpp \
    basics.cpp \
    automotive.cpp \
    dataseed.cpp \
    menu.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    car.h \
    carnode.h \
    carlist.h \
    client.h \
    clientlist.h \
    basics.h \
    automotive.h \
    dataseed.h \
    menu.h

