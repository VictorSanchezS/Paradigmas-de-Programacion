#include "mainwindow.h"
#include <QApplication>
#include "patientslist.h"

int main(int argc, char *argv[])
{
    PatientsList *patients = new PatientsList();

    QApplication a(argc, argv);
    MainWindow w;
    w.setPatients(patients);
    w.show();


    return a.exec();
}
