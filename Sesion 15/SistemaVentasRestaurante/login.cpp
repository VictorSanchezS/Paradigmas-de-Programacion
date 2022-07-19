#include "login.h"
#include "mainwindow.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_btnLogin_clicked()
{
    if ( ui->leLogin->text() == "jaimebravo" && ui->lePass->text() == "123456789" ){
        this->close();
        MainWindow *mw = new MainWindow();
        mw->show();
    }
    else{
        QMessageBox msje;
        msje.setText("Usuario o contraseña incorrecta" );
        msje.exec();
    }
}
