TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    persona.cpp \
    basicas.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    basicas.h

