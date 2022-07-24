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
    fmractualizarlocal.cpp \
    fmradministrarenfermeras.cpp \
    fmrnewenfermera.cpp \
    personaclass.cpp \
    enfermeraclass.cpp \
    nodoenfermeraclass.cpp \
    listaenfermeras.cpp \
    fmractualizarenfermera.cpp \
    doctorclass.cpp \
    frmactualizardoctor.cpp \
    frmadministrardoctores.cpp \
    frmnuevodoctor.cpp \
    listadoctoresclass.cpp \
    nododoctorclass.cpp

HEADERS  += mainwindow.h \
    fmradministrarlocales.h \
    sistemavacunacion.h \
    listalocalesclass.h \
    nodolocalclass.h \
    localclass.h \
    fmrnewlocal.h \
    fmractualizarlocal.h \
    fmradministrarenfermeras.h \
    fmrnewenfermera.h \
    personaclass.h \
    enfermeraclass.h \
    nodoenfermeraclass.h \
    listaenfermeras.h \
    fmractualizarenfermera.h \
    doctorclass.h \
    frmactualizardoctor.h \
    frmadministrardoctores.h \
    frmnuevodoctor.h \
    listadoctoresclass.h \
    nododoctorclass.h

FORMS    += mainwindow.ui \
    fmradministrarlocales.ui \
    fmrnewlocal.ui \
    fmractualizarlocal.ui \
    fmradministrarenfermeras.ui \
    fmrnewenfermera.ui \
    fmractualizarenfermera.ui \
    frmactualizardoctor.ui \
    frmadministrardoctores.ui \
    frmnuevodoctor.ui

DISTFILES += \
    PA_Final.pro.user

RESOURCES += \
    img.qrc
