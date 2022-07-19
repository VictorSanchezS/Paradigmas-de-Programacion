#include <listaproductos.h>
#ifndef FRMNEWPRODUCTO_H
#define FRMNEWPRODUCTO_H

#include <QDialog>

namespace Ui {
class FrmNewProducto;
}

class FrmNewProducto : public QDialog
{
    Q_OBJECT

public:
    explicit FrmNewProducto(QWidget *parent = 0);
    ~FrmNewProducto();

    ListaProductos *getLP() const;
    void setLP(ListaProductos *value);
private slots:
    void on_CmdCerrar_clicked();
    void on_cmdGrabar_clicked();

private:
    Ui::FrmNewProducto *ui;
    ListaProductos *lP;
};

#endif // FRMNEWPRODUCTO_H
