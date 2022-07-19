#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "patientslist.h"

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

    PatientsList *getPatients() const;
    void setPatients(PatientsList *value);

private slots:
    void on_actionAgregar_Pacientes_triggered();

    void on_actionListar_Pacientes_triggered();

private:
    Ui::MainWindow *ui;
    PatientsList *patients;
};

#endif // MAINWINDOW_H
