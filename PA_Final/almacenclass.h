#ifndef ALMACENCLASS_H
#define ALMACENCLASS_H
#include "QString"
#include "lotevacunasclass.h"

class AlmacenClass
{
private:
    QString codigo;
    QString numeroAl;
    QString direccion;
    bool estadoAl;
public:
    AlmacenClass();
    ~AlmacenClass();
    QString getNumeroAl() const;
    void setNumeroAl(const QString &value);
    QString getDireccion() const;
    void setDireccion(const QString &value);
    bool getEstadoAl() const;
    void setEstadoAl(bool value);
    AlmacenClass(QString codigo,QString numeroAl, QString direccion,bool estadoAl);
    QString getCodigo() const;
    void setCodigo(const QString &value);
};

#endif // ALMACENCLASS_H
