#ifndef FMRACTUALIZARPACIENTE_H
#define FMRACTUALIZARPACIENTE_H
#include "listapacientesclass.h"
#include <QDialog>

namespace Ui {
class FmrActualizarPaciente;
}

class FmrActualizarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit FmrActualizarPaciente(QWidget *parent = 0);
    ~FmrActualizarPaciente();

    ListaPacientesClass *getListaPacientes() const;
    void setListaPacientes(ListaPacientesClass *value);

    Paciente *getPaciente() const;
    void setPaciente(Paciente *value);

    void asignarValoresPaciente();
private slots:
    void on_cmdCancelar_clicked();

    void on_cmdActualizar_clicked();
private:
    Ui::FmrActualizarPaciente *ui;
    ListaPacientesClass *listaPacientes;
    Paciente *pac;
};

#endif // FMRACTUALIZARPACIENTE_H
