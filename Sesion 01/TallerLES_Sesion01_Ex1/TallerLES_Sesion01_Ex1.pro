TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    basics.cpp \
    structures.cpp

include(deployment.pri)
qtcAddDeployment()

