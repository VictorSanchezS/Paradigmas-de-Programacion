#ifndef PATIENT_H
#define PATIENT_H
#include "QString"

class Patient
{
private:
    static int counter;
    QString code;
    QString name;
    bool gender;
    QString owner;
    QString idOwner;
    QString dateOfBirth;
    QString symptom;
    int numberSiblings;
public:
    Patient();
    ~Patient();
    QString getName() const;
    void setName(const QString &value);
    QString getIdOwner() const;
    void setIdOwner(const QString &value);
    QString getDateOfBirth() const;
    void setDateOfBirth(const QString &value);
    bool getGender() const;
    void setGender(bool value);
    int getNumberSiblings() const;
    void setNumberSiblings(int value);
    Patient(QString name, bool gender, QString owner, QString idOwner, QString dateOfBirth, QString symptom, int numberSiblings);
    QString getCode() const;
    void setCode(const QString &value);
    QString getOwner() const;
    void setOwner(const QString &value);
    QString getSymptom() const;
    void setSymptom(const QString &value);
};

#endif // PATIENT_H
