TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

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

