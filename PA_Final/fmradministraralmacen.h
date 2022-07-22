#ifndef FMRADMINISTRARALMACEN_H
#define FMRADMINISTRARALMACEN_H
#include "listaalmacenclass.h"
#include <QDialog>

namespace Ui {
class FmrAdministrarAlmacen;
}

class FmrAdministrarAlmacen : public QDialog
{
    Q_OBJECT

public:
    explicit FmrAdministrarAlmacen(QWidget *parent = 0);
    ~FmrAdministrarAlmacen();

    ListaAlmacenClass *getListaAlmacen()const;
    void setListaAlmacen(ListaAlmacenClass *value);

    void listadoAlmacen(ListaAlmacenClass *listaAlmacen);
    void mostrarFila(int x, NodoAlmacenClass *aux);
    AlmacenClass *seleccionarAlmacen(QString codigo);

private slots:
    void on_CerrarAl_clicked();

    void on_EliminarAl_clicked();

    void on_ActualizarAl_clicked();

    void on_AgregarAl_clicked();

    void on_BuscarAl_clicked();

private:
    Ui::FmrAdministrarAlmacen *ui;
    ListaAlmacenClass *listaAlmacen;
};

#endif // FMRADMINISTRARALMACEN_H
