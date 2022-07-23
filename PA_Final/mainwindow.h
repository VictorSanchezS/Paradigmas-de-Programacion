#include "sistemavacunacion.h"
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    SistemaVacunacion *getSistemaVacunacion() const;
    void setSistemaVacunacion(SistemaVacunacion *value);

private slots:
    void on_actionAdministrar_Locales_triggered();

    void on_actionAdministrar_Enfermeras_triggered();

    void on_actionAdministrar_Doctores_triggered();

    void on_actionAdministrar_Pacientes_triggered();

private:
    Ui::MainWindow *ui;
    SistemaVacunacion *sistemaVacunacion;
};

#endif // MAINWINDOW_H
