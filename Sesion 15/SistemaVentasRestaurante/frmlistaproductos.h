#include <listaproductos.h>

#ifndef FRMLISTAPRODUCTOS_H
#define FRMLISTAPRODUCTOS_H

#include <QDialog>

namespace Ui {
class FrmListaProductos;
}

class FrmListaProductos : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaProductos(QWidget *parent = 0);
    ~FrmListaProductos();

    ListaProductos *getLP() const;
    void setLP(ListaProductos *value);
    void ListadoProductos( ListaProductos *lP );
    void mostrarFila( int x, NodoProducto *aux );
    Producto *SeleccionarProducto(QString codigo );
private slots:
    void on_cmdCerrar_2_clicked();

    void on_cmdBuscar_clicked();

    void on_cmdTodos_clicked();

    void on_cmdCerrar_3_clicked();

    void on_cmdActualizar_clicked();

    void on_cmdEliminar_clicked();

private:
    Ui::FrmListaProductos *ui;
    ListaProductos *lP;
};

#endif // FRMLISTAPRODUCTOS_H
