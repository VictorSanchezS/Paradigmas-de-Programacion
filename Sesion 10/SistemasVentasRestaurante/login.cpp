#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
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
    if(ui->leLogin->text() == "Genaro" && ui->lePassword->text() == "123"){
        this->close();
        MainWindow *mw = new MainWindow();
        mw->show();
    }
    else{
        QMessageBox message;
        message.setText("Usuario o contraseña incorrecta");
        message.exec();
    }
}
