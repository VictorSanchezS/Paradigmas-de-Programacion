#-------------------------------------------------
#
# Project created by QtCreator 2022-06-06T09:37:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SistemasVentasRestaurante
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    venta.cpp

HEADERS  += mainwindow.h \
    login.h \
    venta.h

FORMS    += mainwindow.ui \
    login.ui \
    venta.ui

RESOURCES += \
    imagenes.qrc
