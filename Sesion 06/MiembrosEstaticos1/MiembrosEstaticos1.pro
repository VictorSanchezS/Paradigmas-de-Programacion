TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    persona.cpp \
    basicas.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    basicas.h

