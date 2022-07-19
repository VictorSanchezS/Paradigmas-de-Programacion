#ifndef LOCALCLASS_H
#define LOCALCLASS_H
#include <QString>

class LocalClass
{
private:
    static int contador;
    QString codigo;
    QString nombre;
    QString direccion;
    bool estado;
    //ListaDoctoresClass *listaDoctores;
    //ListaEnfermerasClass *listaEnfermeras;
    //ListaPacientesClass *listaPacientes;
public:
    LocalClass();
    ~LocalClass();
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getDireccion() const;
    void setDireccion(const QString &value);
    bool getEstado() const;
    void setEstado(bool value);
    LocalClass(QString codigo,QString nombre, QString direccion, bool estado);
};

#endif // LOCALCLASS_H
