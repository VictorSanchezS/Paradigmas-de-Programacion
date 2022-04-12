#include <basics.cpp>

struct patient{
    string id;
    string names;
    string surnames;
    unsigned short age;
    double weight;
    unsigned short size;
};

struct patientNode{
    patient *paciente;
    patientNode *next;
};

struct patientsList{
    unsigned short numberPatients;
    patientNode *head;
};

struct disease{
    string name;
    string code;
    patientsList *patients;
};

struct diseaseNode{
    disease *enfermedad;
    diseaseNode *next;
    diseaseNode *previous;
};

struct listDiseases{
    unsigned short numberDiseases;
    diseaseNode *head;
};
