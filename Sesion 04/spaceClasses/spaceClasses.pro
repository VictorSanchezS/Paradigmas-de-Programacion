TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    house.cpp \
    pet.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    house.h \
    pet.h

