#include "restaurante.h"
#include "mainwindow.h"
#include "login.h"
#include <QApplication>


int main(int argc, char *argv[]) // primera funcion en ejecutarse
{
    Restaurante *rest = new Restaurante();
    QApplication a(argc, argv);
    /*login *frmLogin = new login();
    frmLogin->show();       // llama a una ventana*/
    MainWindow *mW = new MainWindow();
    mW->setRest( rest );
    mW->show();
    return a.exec();
}
