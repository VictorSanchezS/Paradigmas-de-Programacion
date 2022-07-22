#ifndef LOTEVACUNASCLASS_H
#define LOTEVACUNASCLASS_H
#include "QString"

class LoteVacunasClass
{
private:
    QString codigo;
    QString nombre;
    QString Cantidad;
    QString fecha;
    bool estado;
public:
    LoteVacunasClass();
    ~LoteVacunasClass();
    QString getCodigo() const;
    void setCodigo(const QString &value);
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getCantidad() const;
    void setCantidad(const QString &value);
    QString getFecha() const;
    void setFecha(const QString &value);
    bool getEstado() const;
    void setEstado(bool value);
    LoteVacunasClass(QString codigo, QString nombre, QString Cantidad, QString fecha, bool estado);
};

#endif // LOTEVACUNASCLASS_H
