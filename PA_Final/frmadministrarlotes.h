#ifndef FRMADMINISTRARLOTES_H
#define FRMADMINISTRARLOTES_H
#include "listalotevacunasclass.h"
#include <QDialog>

namespace Ui {
class FrmAdministrarLotes;
}

class FrmAdministrarLotes : public QDialog
{
    Q_OBJECT

public:
    explicit FrmAdministrarLotes(QWidget *parent = 0);
    ~FrmAdministrarLotes();

    ListaLoteVacunasClass *getListaLoteV() const;
    void setListaLotesV(ListaLoteVacunasClass *value);

    void listadoLoteV(ListaLoteVacunasClass *listaLoteV);
    void mostrarFilaLotesV(int x, NodoLoteClass *aux);
    LoteVacunasClass *seleccionarLoteV(QString codigo);

private slots:
    void on_AgregarLote_clicked();

    void on_EliminarLote_clicked();

    void on_ActualizarLote_clicked();

    void on_Close_clicked();

    void on_Buscar_clicked();

private:
    Ui::FrmAdministrarLotes *ui;
    ListaLoteVacunasClass *listaLoteV;
};

#endif // FRMADMINISTRARLOTES_H
