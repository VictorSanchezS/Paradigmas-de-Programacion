#ifndef FRMNEWLOTES_H
#define FRMNEWLOTES_H

#include "listalotevacunasclass.h"
#include <QDialog>

namespace Ui {
class FrmNewLotes;
}

class FrmNewLotes : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNewLotes(QWidget *parent = 0);
    ~FrmNewLotes();

    ListaLoteVacunasClass *getListaLoteVacunas() const;
    void setListaLotes(ListaLoteVacunasClass *value);
    void limpiarControles();

private slots:
    void on_Grabar_clicked();

    void on_Cerrar_clicked();

private:
    Ui::FrmNewLotes *ui;
    ListaLoteVacunasClass *listaLotes;
};

#endif // FRMNEWLOTES_H
