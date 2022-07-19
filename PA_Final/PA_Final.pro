#-------------------------------------------------
#
# Project created by QtCreator 2022-07-14T12:27:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PA_Final
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    fmradministrarlocales.cpp \
    sistemavacunacion.cpp \
    listalocalesclass.cpp \
    nodolocalclass.cpp \
    localclass.cpp \
    fmrnewlocal.cpp \
    fmractualizarlocal.cpp

HEADERS  += mainwindow.h \
    fmradministrarlocales.h \
    sistemavacunacion.h \
    listalocalesclass.h \
    nodolocalclass.h \
    localclass.h \
    fmrnewlocal.h \
    fmractualizarlocal.h

FORMS    += mainwindow.ui \
    fmradministrarlocales.ui \
    fmrnewlocal.ui \
    fmractualizarlocal.ui

DISTFILES += \
    PA_Final.pro.user

RESOURCES += \
    img.qrc
