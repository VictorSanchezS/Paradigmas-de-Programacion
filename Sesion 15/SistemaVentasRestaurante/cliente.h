#include "iostream"
#include "QString"


using namespace std;
#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente
{
private:
    QString codigo;
    QString apellidos;
    QString nombres;
    QString direccion;
    QString ruc;
    QString fechaNac;    
    Cliente *sgte;
public:
    Cliente();
    Cliente(QString codigo, QString apellidos, QString nombres, QString direccion, QString ruc, QString fechaNac );
    ~Cliente();
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getApellidos() const;
    void setApellidos(const QString &value);
    QString getNombres() const;
    void setNombres(const QString &value);
    QString getDireccion() const;
    void setDireccion(const QString &value);
    QString getRuc() const;
    void setRuc(const QString &value);
    QString getFechaNac() const;
    void setFechaNac(const QString &value);
    Cliente *getSgte() const;
    void setSgte(Cliente *value);
};

#endif // CLIENTE_H
