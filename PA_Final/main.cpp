#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    SistemaVacunacion *sistemaVacunacion = new SistemaVacunacion();
    QApplication a(argc, argv);
    /*MainWindow *w = new MainWindow();
    w->setSistemaVacunacion(sistemaVacunacion);
    w->show();*/

    MainWindow w;
    w.setSistemaVacunacion(sistemaVacunacion);
    w.show();

    return a.exec();
}
