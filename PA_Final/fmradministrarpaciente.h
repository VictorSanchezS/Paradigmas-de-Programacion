#ifndef FMRADMINISTRARPACIENTE_H
#define FMRADMINISTRARPACIENTE_H
#include "listapacientesclass.h"

#include <QDialog>

namespace Ui {
class FmrAdministrarPaciente;
}

class FmrAdministrarPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit FmrAdministrarPaciente(QWidget *parent = 0);
    ~FmrAdministrarPaciente();

    ListaPacientesClass *getListaPacientes() const;
    void setListaPacientes(ListaPacientesClass *value);

    void mostrarFilaPacientes(int x, NodoPacienteClass *aux);
    void listadoPacientes(ListaPacientesClass *listaPacientes);
    Paciente *selecionarPaciente(QString codigo);


private slots:
    void on_cmdAgregarPaciente_clicked();

    void on_cmdCerrar_clicked();

    void on_cmdBuscar_clicked();

    void on_cmdMostrarTodos_clicked();

    void on_cmdActualizarPaciente_clicked();

    void on_cmdEliminarPaciente_clicked();

private:
    Ui::FmrAdministrarPaciente *ui;
    ListaPacientesClass * listaPacientes;
};

#endif // FMRADMINISTRARPACIENTE_H
