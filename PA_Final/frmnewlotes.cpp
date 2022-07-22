#include "frmnewlotes.h"
#include "ui_frmnewlotes.h"
#include "QMessageBox"

FrmNewLotes::FrmNewLotes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmNewLotes)
{
    ui->setupUi(this);
    this->listaLotes = new ListaLoteVacunasClass();
}

FrmNewLotes::~FrmNewLotes()
{
    delete ui;
}

ListaLoteVacunasClass *FrmNewLotes::getListaLoteVacunas() const
{
    return listaLotes;
}

void FrmNewLotes::setListaLotes(ListaLoteVacunasClass *value)
{
    listaLotes = value;
}

void FrmNewLotes::limpiarControles()
{

}


void FrmNewLotes::on_Grabar_clicked()
{
    QString codigo = "Lot-";
    int numero = this->listaLotes->getNumeroLotes()+1;
    codigo.append((QString::number(numero)));
    //Validar
    if(ui->txtLote->text().isEmpty()){
        QMessageBox::critical(this, "Error", "Falta Nombre");
    }
    if(ui->cantLot->text().isEmpty()) {
        QMessageBox::critical(this, "Error", "Falta La Cantidad de Lotes");
    }
    if(ui->lotFe->text().isEmpty()){
        QMessageBox::critical(this,"Error", "Falta La Fecha de Adqusion");
    }
    //Datos Formulario
    QString nombre = this->ui->txtLote->text();
    QString Cantidad= this->ui->cantLot->text();
    QString fecha= this->ui->lotFe->text();
    bool estado= true;
    //
    LoteVacunasClass *loteV = new LoteVacunasClass(codigo,nombre,Cantidad,fecha,estado);
    this->listaLotes->insertarLote(loteV);
    //
    QMessageBox::information( this, "Registro Correcto","Registro Correcto"  );
    //
    ui->txtLote->clear();
    ui->cantLot->clear();
    ui->lotFe->clear();
}

void FrmNewLotes::on_Cerrar_clicked()
{
    this->close();
}
