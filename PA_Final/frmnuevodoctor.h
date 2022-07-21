#ifndef FRMNUEVODOCTOR_H
#define FRMNUEVODOCTOR_H
#include "listadoctoresclass.h"
#include <QDialog>

namespace Ui {
class FrmNuevoDoctor;
}

class FrmNuevoDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNuevoDoctor(QWidget *parent = 0);
    ~FrmNuevoDoctor();

    listaDoctoresClass *getListaDoctores() const;
    void setListaDoctores(listaDoctoresClass *value);

private slots:
    void on_cmdRegistrar_clicked();

    void on_cmdCancelar_clicked();

private:
    Ui::FrmNuevoDoctor *ui;
    listaDoctoresClass *listaDoctores;
};

#endif // FRMNUEVODOCTOR_H
