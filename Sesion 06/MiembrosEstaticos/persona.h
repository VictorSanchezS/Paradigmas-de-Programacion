#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
private:
    static float sueldo;
    unsigned short edad;
public:
    Persona();
    ~Persona();
    unsigned short getEdad() const;
    void setEdad(unsigned short value);
};

#endif // PERSONA_H
