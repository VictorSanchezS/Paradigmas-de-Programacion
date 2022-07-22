#ifndef FRMACTUALIZARLOTES_H
#define FRMACTUALIZARLOTES_H
#include "listalotevacunasclass.h"
#include <QDialog>

namespace Ui {
class FrmActualizarLotes;
}

class FrmActualizarLotes : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarLotes(QWidget *parent = 0);
    ~FrmActualizarLotes();

    ListaLoteVacunasClass *getListaLote()const;
    void setListaLote(ListaLoteVacunasClass *value);

    LoteVacunasClass *getLote() const;
    void setLote(LoteVacunasClass *value);

    void asignarValores();

private slots:
    void on_Grab_clicked();

    void on_Cerr_clicked();

private:
    Ui::FrmActualizarLotes *ui;
    ListaLoteVacunasClass *listaLote;
    LoteVacunasClass *lote;
};

#endif // FRMACTUALIZARLOTES_H
