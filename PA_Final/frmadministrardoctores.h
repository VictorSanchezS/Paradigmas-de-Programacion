#ifndef FRMADMINISTRARDOCTORES_H
#define FRMADMINISTRARDOCTORES_H
#include "listadoctoresclass.h"
#include <QDialog>

namespace Ui {
class FrmAdministrarDoctores;
}

class FrmAdministrarDoctores : public QDialog
{
    Q_OBJECT

public:
    explicit FrmAdministrarDoctores(QWidget *parent = 0);
    ~FrmAdministrarDoctores();

    listaDoctoresClass *getListaDoctores() const;
    void setListaDoctores(listaDoctoresClass *value);

    void mostrarDoctores(int x, nodoDoctorClass *aux );
    void listadoDoctores(listaDoctoresClass *listaDoctores);
    doctorclass *escogerDoctor(QString codigo );

private slots:
    void on_cmRegistrarDoctor_clicked();

    void on_cmdBuscarDoctor_clicked();

    void on_cmdMostrarLista_clicked();

    void on_cmdActualizarDoctor_clicked();

    void on_cmdEliminarDoctor_clicked();

    void on_cmdCerrar_clicked();

private:
    Ui::FrmAdministrarDoctores *ui;
    listaDoctoresClass *listaDoctores;
};

#endif // FRMADMINISTRARDOCTORES_H
