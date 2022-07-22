#include "fmradministraralmacen.h"
#include "ui_fmradministraralmacen.h"
#include "fmrnewalmacen.h"
#include "fmractualizaralmacen.h"
#include "QMessageBox"
#include <iostream>
using namespace std;

FmrAdministrarAlmacen::FmrAdministrarAlmacen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FmrAdministrarAlmacen)
{
    ui->setupUi(this);
    ui->twAl->setColumnWidth(0,120);
    ui->twAl->setColumnWidth(1,250);
    ui->twAl->setColumnWidth(2,280);
    ui->twAl->setColumnWidth(3,98);
}

FmrAdministrarAlmacen::~FmrAdministrarAlmacen()
{
    delete ui;
}

ListaAlmacenClass *FmrAdministrarAlmacen::getListaAlmacen() const
{
    return listaAlmacen;
}

void FmrAdministrarAlmacen::setListaAlmacen(ListaAlmacenClass *value)
{
    listaAlmacen= value;
}

void FmrAdministrarAlmacen::listadoAlmacen(ListaAlmacenClass *listaAlmacen)
{
    ui->twAl->setRowCount(0);
    NodoAlmacenClass *aux = new NodoAlmacenClass();
    aux = listaAlmacen->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getAlmacen()->getEstadoAl() == true){
            this->mostrarFila(x,aux);
        }
        aux=aux->getSgte();
        x++;
    }
}

void FmrAdministrarAlmacen::mostrarFila(int x, NodoAlmacenClass *aux)
{
    ui->twAl->insertRow(ui->twAl->rowCount());
    ui->twAl->setItem(x,0, new QTableWidgetItem(aux->getAlmacen()->getCodigo()));
    ui->twAl->setItem(x,1, new QTableWidgetItem(aux->getAlmacen()->getDireccion()));
    ui->twAl->setItem(x,2, new QTableWidgetItem(aux->getAlmacen()->getNumeroAl()));
    string estadoTexto = aux->getAlmacen()->getEstadoAl() ? "Habilitado" : "Inhabilitado";
    QString EstadoAl = QString::fromStdString(estadoTexto);
    ui->twAl->setItem(x,3, new QTableWidgetItem(EstadoAl));
}

AlmacenClass *FmrAdministrarAlmacen::seleccionarAlmacen(QString codigo)
{
    NodoAlmacenClass *aux =new NodoAlmacenClass();
    aux = this->listaAlmacen->getCab();
    while(aux != NULL ){
        if(aux->getAlmacen()->getCodigo() == codigo){
            return aux->getAlmacen();
        }
        aux = aux->getSgte();
    }
    return NULL;
}

void FmrAdministrarAlmacen::on_CerrarAl_clicked()
{
    this->close();
}

void FmrAdministrarAlmacen::on_EliminarAl_clicked()
{

}

void FmrAdministrarAlmacen::on_ActualizarAl_clicked()
{

}

void FmrAdministrarAlmacen::on_AgregarAl_clicked()
{
    int tipo;
    FmrNewAlmacen *fmrNewAlmacen = new FmrNewAlmacen();
    fmrNewAlmacen->setListaAlmacen(this->getListaAlmacen());
    tipo = fmrNewAlmacen->exec();
    if(tipo == QDialog::Rejected){
        this->listadoAlmacen(this->listaAlmacen);
    }
}

void FmrAdministrarAlmacen::on_BuscarAl_clicked()
{
   ui->twAl->setRowCount(0);
   NodoAlmacenClass *aux = new NodoAlmacenClass();
   aux = listaAlmacen->getCab();
   int x = 0;
   while(aux != NULL){
       if(aux->getAlmacen()->getNumeroAl()== ui->numerAl->text()){
           this->mostrarFila(x,aux);
           x++;
       }
       aux = aux->getSgte();
   }
   ui->numerAl->clear();
   ui->numerAl->setFocus();
}
