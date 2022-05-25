TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    chip.cpp \
    battery.cpp \
    phone.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    chip.h \
    battery.h \
    phone.h

