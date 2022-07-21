#ifndef FRMACTUALIZARDOCTOR_H
#define FRMACTUALIZARDOCTOR_H

#include "listadoctoresclass.h"
#include <QDialog>

namespace Ui {
class FrmActualizarDoctor;
}

class FrmActualizarDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarDoctor(QWidget *parent = 0);
    ~FrmActualizarDoctor();

    listaDoctoresClass *getListaDoctores() const;
    void setListaDoctores(listaDoctoresClass *value);

    doctorclass *getDoctor() const;
    void setDoctor(doctorclass *value);
    void nuevoDatosDoctor();

private slots:
    void on_cmdActualizar_clicked();

    void on_cmdCancelar_clicked();

private:
    Ui::FrmActualizarDoctor *ui;
    listaDoctoresClass *listaDoctores;
    doctorclass *doctor;
};

#endif // FRMACTUALIZARDOCTOR_H
