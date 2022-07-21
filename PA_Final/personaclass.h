#ifndef PERSONACLASS_H
#define PERSONACLASS_H
#include "QString"

class PersonaClass
{
private:
    QString nombre;
    QString apellidos;
    QString dni;
    QString direccion;
    QString telefono;
    bool genero;
    QString fechaNacimiento;
public:
    PersonaClass();
    ~PersonaClass();
    QString getNombre() const;
    void setNombre(const QString &value);
    QString getApellidos() const;
    void setApellidos(const QString &value);
    QString getDni() const;
    void setDni(const QString &value);
    QString getDireccion() const;
    void setDireccion(const QString &value);
    QString getTelefono() const;
    void setTelefono(const QString &value);
    bool getGenero() const;
    void setGenero(bool value);
    QString getFechaNacimiento() const;
    void setFechaNacimiento(const QString &value);
    PersonaClass(QString nombre, QString apellidos, QString dni, QString direccion, QString telefono, bool genero, QString fechaNacimiento);
};

#endif // PERSONACLASS_H
