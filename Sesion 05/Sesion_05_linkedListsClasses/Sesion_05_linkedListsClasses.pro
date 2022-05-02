TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    person.cpp \
    personnode.cpp \
    peoplelist.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    person.h \
    personnode.h \
    peoplelist.h

