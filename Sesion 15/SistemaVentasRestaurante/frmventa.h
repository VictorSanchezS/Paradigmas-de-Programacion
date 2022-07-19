#ifndef FRMVENTA_H
#define FRMVENTA_H

#include "listaclientes.h"
#include "listaproductos.h"
#include "listaventas.h"
#include "listatrabajadores.h"

#include <QDialog>

namespace Ui {
class FrmVenta;
}

class FrmVenta : public QDialog
{
    Q_OBJECT

public:
    explicit FrmVenta(QWidget *parent = 0);
    ~FrmVenta();

    ListaClientes *getLC() const;
    void setLC(ListaClientes *value);

    ListaProductos *getLP() const;
    void setLP(ListaProductos *value);

    ListaTrabajadores *getLT() const;
    void setLT(ListaTrabajadores *value);

    ListaVentas *getLV() const;
    void setLV(ListaVentas *value);
    Cliente *buscarCliente( QString dni );
private slots:
    void on_btnCerrar_clicked();

    void on_btnBuscar_clicked();

    void on_btnBuscar_clicked(bool checked);

    void on_cmdBuscarDni_clicked();

private:
    Ui::FrmVenta *ui;
    ListaClientes *lC;
    ListaProductos *lP;
    ListaTrabajadores *lT;
    ListaVentas *lV;        // AGREGAR LA NUEVA VENTA
};

#endif // FRMVENTA_H
