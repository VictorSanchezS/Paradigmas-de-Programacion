#-------------------------------------------------
#
# Project created by QtCreator 2022-07-17T18:56:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PC_2_Veterinaria
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frmactualizarmedicamento.cpp \
    frmactualizarpaciente.cpp \
    frmactualizartrabajador.cpp \
    frmlistamedicamentos.cpp \
    frmlistapacientes.cpp \
    frmlistatrabajadores.cpp \
    frmnewpaciente.cpp \
    frmnewtrabajador.cpp \
    frmnuevomedicamento.cpp \
    frmtrabajadores.cpp \
    patient.cpp \
    patientnode.cpp \
    patientslist.cpp

HEADERS  += mainwindow.h \
    frmactualizarmedicamento.h \
    frmactualizarpaciente.h \
    frmactualizartrabajador.h \
    frmlistamedicamentos.h \
    frmlistapacientes.h \
    frmlistatrabajadores.h \
    frmnewpaciente.h \
    frmnewtrabajador.h \
    frmnuevomedicamento.h \
    frmtrabajadores.h \
    patient.h \
    patientnode.h \
    patientslist.h

FORMS    += mainwindow.ui \
    frmactualizarmedicamento.ui \
    frmactualizarpaciente.ui \
    frmactualizartrabajador.ui \
    frmlistamedicamentos.ui \
    frmlistapacientes.ui \
    frmlistatrabajadores.ui \
    frmnewpaciente.ui \
    frmnewtrabajador.ui \
    frmnuevomedicamento.ui \
    frmtrabajadores.ui

RESOURCES += \
    img.qrc
