TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    cliente.cpp \
    listaclientes.cpp \
    producto.cpp \
    nodoproducto.cpp \
    listaproductos.cpp \
    estante.cpp \
    nodoestante.cpp \
    listaestantes.cpp \
    zona.cpp \
    listazonas.cpp \
    supermercado.cpp \
    basicas.cpp \
    menu.cpp \
    semilladatos.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    cliente.h \
    listaclientes.h \
    producto.h \
    nodoproducto.h \
    listaproductos.h \
    estante.h \
    nodoestante.h \
    listaestantes.h \
    zona.h \
    listazonas.h \
    supermercado.h \
    basicas.h \
    menu.h \
    semilladatos.h

