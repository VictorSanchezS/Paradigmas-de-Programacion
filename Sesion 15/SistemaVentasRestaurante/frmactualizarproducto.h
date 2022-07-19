#ifndef FRMACTUALIZARPRODUCTO_H
#define FRMACTUALIZARPRODUCTO_H

#include <QDialog>
#include "listaproductos.h"

namespace Ui {
class FrmActualizarProducto;
}

class FrmActualizarProducto : public QDialog
{
    Q_OBJECT

public:
    explicit FrmActualizarProducto(QWidget *parent = 0);
    ~FrmActualizarProducto();

    ListaProductos *getLP() const;
    void setLP(ListaProductos *value);

    Producto *getPr() const;
    void setPr(Producto *value);
    void asignarValores();
private slots:
    void on_CmdCerrar_clicked();

    void on_cmdGrabar_clicked();

private:
    Ui::FrmActualizarProducto *ui;
    ListaProductos *lP;
    Producto *pr;
};

#endif // FRMACTUALIZARPRODUCTO_H
