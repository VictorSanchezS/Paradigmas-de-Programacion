#include <frmnewproducto.h>
#include "frmlistaproductos.h"
#include  "frmactualizarproducto.h"
#include "ui_frmlistaproductos.h"
#include "QMessageBox"

FrmListaProductos::FrmListaProductos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmListaProductos)
{

    ui->setupUi(this);

    //ui->twProductos->setColumnCount(6);
    ui->twProductos->setColumnWidth(0,80);
    ui->twProductos->setColumnWidth(1,220);
    ui->twProductos->setColumnWidth(2,220);
    ui->twProductos->setColumnWidth(3,100);
    ui->twProductos->setColumnWidth(4,100);
    ui->twProductos->setColumnWidth(5,120);
}

FrmListaProductos::~FrmListaProductos()
{
    delete ui;
}
ListaProductos *FrmListaProductos::getLP() const
{
    return lP;
}

void FrmListaProductos::setLP(ListaProductos *value)
{
    lP = value;
}


void FrmListaProductos::on_cmdCerrar_2_clicked() // boton agregar
{
    int tipo;
    FrmNewProducto *pro = new FrmNewProducto();
    pro->setLP(this->getLP());
    tipo = pro->exec();
    if ( tipo == QDialog::Rejected ){

        this->ListadoProductos( this->lP );
    }
    //this->ListadoProductos( this->lP );
}

void FrmListaProductos::mostrarFila( int x, NodoProducto *aux ){
    ui->twProductos->insertRow( ui->twProductos->rowCount() );
    ui->twProductos->setItem(x, 0, new QTableWidgetItem(  aux->getInfo()->getCodigo() ));
    ui->twProductos->setItem(x, 1, new QTableWidgetItem(  aux->getInfo()->getNombre() ));
    ui->twProductos->setItem(x, 2, new QTableWidgetItem(  aux->getInfo()->getDescripcion()));
    ui->twProductos->setItem(x, 3, new QTableWidgetItem(  QString::number( aux->getInfo()->getPrecio())));
    ui->twProductos->setItem(x, 4, new QTableWidgetItem(  QString::number(aux->getInfo()->getStock())));
    ui->twProductos->setItem(x, 5, new QTableWidgetItem(   aux->getInfo()->getFechaVenc() ));
}

void FrmListaProductos::ListadoProductos( ListaProductos *lP ){
    //Producto *pro = new Producto("P001", "Pan", "Pancito", 1.00, 100,"01/01/2020" );
    //this->lP->insertarProducto(pro);
    ui->twProductos->setRowCount(0);        // limpia el table
    NodoProducto *aux = new NodoProducto();
    aux = lP->getCab();
    int x = 0;
    while( aux != NULL ){      
        this->mostrarFila(x, aux );
        aux = aux->getSgte();
        x++;
    }
}

void FrmListaProductos::on_cmdBuscar_clicked()
{
    ui->twProductos->setRowCount(0);
    NodoProducto *aux = new NodoProducto();
    aux = lP->getCab();
    int x = 0;
    while( aux != NULL ){
        if ( aux->getInfo()->getNombre() == ui->txtNombre->text()){
            this->mostrarFila(x, aux );
            x++;
        }
        aux = aux->getSgte();
    }
}

void FrmListaProductos::on_cmdTodos_clicked()
{
    this->ListadoProductos( this->lP );
}

Producto *FrmListaProductos::SeleccionarProducto(QString codigo ){
    NodoProducto *aux = new NodoProducto();
    aux = this->lP->getCab();
    while( aux != NULL ){
        if ( aux->getInfo()->getCodigo() == codigo ){
            return aux->getInfo();
            break;
        }
        aux = aux->getSgte();
    }
    return NULL;
}


void FrmListaProductos::on_cmdActualizar_clicked()
{
    if ( ui->twProductos->currentIndex().isValid()){   // verificaba que se haya seleccionado un elemento
        int tipo;
        Producto *pAct = new Producto();
        pAct = this->SeleccionarProducto( ui->twProductos->item( ui->twProductos->currentRow() ,0 )->text() );
        FrmActualizarProducto *pro = new FrmActualizarProducto ();      // formulario actualizar
        pro->setLP( this->getLP() );
        pro->setPr( pAct );     // DATO DEL PRODUCTO QUE VOY A MODIFICAR
        pro->asignarValores();
        tipo = pro->exec();        
        if ( tipo == QDialog::Rejected ){

            this->ListadoProductos( this->lP );
        }
    }
    else{
        QMessageBox::critical( this, "", "Debe Seleccionar un producto");
    }

}

void FrmListaProductos::on_cmdEliminar_clicked()
{
    ui->twProductos->setRowCount(0);
    NodoProducto *aux = new NodoProducto();
    aux = lP->getCab();
    int x = 0;
    while( aux != NULL ){
        if ( aux->getInfo()->getNombre() == ui->txtNombre->text()){
            delete(aux);
            x++;
        }
        aux = aux->getSgte();
    }
}
