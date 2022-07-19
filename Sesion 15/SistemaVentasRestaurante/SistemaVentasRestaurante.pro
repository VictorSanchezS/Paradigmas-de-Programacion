#-------------------------------------------------
#
# Project created by QtCreator 2022-06-06T09:37:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SistemaVentasRestaurante
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    restaurante.cpp \
    listatrabajadores.cpp \
    trabajador.cpp \
    listaproductos.cpp \
    nodoproducto.cpp \
    producto.cpp \
    frmlistaproductos.cpp \
    frmnewproducto.cpp \
    frmactualizarproducto.cpp \
    listaclientes.cpp \
    nodocliente.cpp \
    cliente.cpp \
    frmventa.cpp \
    listaventas.cpp \
    ventas.cpp \
    listaproductosc.cpp \
    productosc.cpp \
    frmlistaclientes.cpp \
    frmlistaproductossel.cpp

HEADERS  += mainwindow.h \
    login.h \
    restaurante.h \
    listatrabajadores.h \
    trabajador.h \
    listaproductos.h \
    nodoproducto.h \
    producto.h \
    frmlistaproductos.h \
    frmnewproducto.h \
    frmactualizarproducto.h \
    listaclientes.h \
    nodocliente.h \
    cliente.h \
    frmventa.h \
    listaventas.h \
    ventas.h \
    listaproductosc.h \
    productosc.h \
    frmlistaclientes.h \
    frmlistaproductossel.h

FORMS    += mainwindow.ui \
    login.ui \
    frmlistaproductos.ui \
    frmnewproducto.ui \
    frmactualizarproducto.ui \
    frmventa.ui \
    frmlistaclientes.ui \
    frmlistaproductossel.ui

RESOURCES += \
    imagenes.qrc
