#include "mainwindow.h"
#include <QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    login *fmrLogin = new login();
    fmrLogin->show();

    return a.exec();
}
