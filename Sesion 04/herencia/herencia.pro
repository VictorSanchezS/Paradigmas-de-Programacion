TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    persona.cpp \
    trabajador.cpp \
    alumno.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    trabajador.h \
    alumno.h

