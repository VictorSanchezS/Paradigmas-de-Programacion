TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    persona.cpp \
    alumno.cpp \
    docente.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    alumno.h \
    docente.h

