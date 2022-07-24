#ifndef FMRNEWPACIENTE_H
#define FMRNEWPACIENTE_H
#include "listapacientesclass.h"

#include <QDialog>

namespace Ui {
class FmrNewPaciente;
}

class FmrNewPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit FmrNewPaciente(QWidget *parent = 0);
    ~FmrNewPaciente();

    ListaPacientesClass *getListaPacientes() const;
    void setListaPacientes(ListaPacientesClass *value);

private slots:
    void on_cmdCancelar_clicked();

    void on_cmdRegistrar_clicked();

private:
    Ui::FmrNewPaciente *ui;
    ListaPacientesClass *ListaPacientes;
};
#endif // FMRNEWPACIENTE_H
