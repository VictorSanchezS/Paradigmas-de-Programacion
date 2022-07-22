#include "frmadministrarlotes.h"
#include "ui_frmadministrarlotes.h"
#include "frmnewlotes.h"
#include "frmactualizarlotes.h"
#include "QMessageBox"

FrmAdministrarLotes::FrmAdministrarLotes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmAdministrarLotes)
{
    ui->setupUi(this);
    ui->twLotes->setColumnWidth(0,80);
    ui->twLotes->setColumnWidth(1,220);
    ui->twLotes->setColumnWidth(2,220);
}

FrmAdministrarLotes::~FrmAdministrarLotes()
{
    delete ui;
}
void FrmAdministrarLotes::on_AgregarLote_clicked()
{
    int tipo;
    FrmNewLotes *fmrNewLoteV = new FrmNewLotes();
    fmrNewLoteV->setListaLotes(this->getListaLoteV());
    tipo = fmrNewLoteV->exec();
    if(tipo == QDialog::Rejected){
        this->listadoLoteV(this->listaLoteV);
    }
}

ListaLoteVacunasClass *FrmAdministrarLotes::getListaLoteV() const
{
    return listaLoteV;
}

void FrmAdministrarLotes::setListaLotesV(ListaLoteVacunasClass *value)
{
    listaLoteV = value;
}

void FrmAdministrarLotes::mostrarFilaLotesV(int x, NodoLoteClass *aux)
{
    ui->twLotes->insertRow(ui->twLotes->rowCount());
    ui->twLotes->setItem(x,0, new QTableWidgetItem(aux->getLoteV()->getCodigo()));
    ui->twLotes->setItem(x,1, new QTableWidgetItem(aux->getLoteV()->getNombre()));
    ui->twLotes->setItem(x,2, new QTableWidgetItem(aux->getLoteV()->getCantidad()));
}

void FrmAdministrarLotes::listadoLoteV(ListaLoteVacunasClass *listaLoteV)
{
    ui->twLotes->setRowCount(0);
    NodoLoteClass *aux = new NodoLoteClass();
    aux = listaLoteV->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getLoteV()->getEstado() == true ){
            this->mostrarFilaLotesV(x,aux);
        }
        aux = aux->getSgte();
        x++;
    }
}

LoteVacunasClass *FrmAdministrarLotes::seleccionarLoteV(QString codigo)
{
    NodoLoteClass *aux = new NodoLoteClass();
    aux = this->listaLoteV->getCab();
    while(aux != NULL){
        if(aux->getLoteV()->getCodigo() == codigo){
            return aux->getLoteV();
        }
        aux = aux->getSgte();
    }
    return NULL;
}


void FrmAdministrarLotes::on_EliminarLote_clicked()
{
    if(ui->twLotes->currentIndex().isValid()){
        QMessageBox::StandardButton respuestaButton;
        respuestaButton = QMessageBox::question(this,"Eliminar","¿Está Seguro?",QMessageBox::Yes | QMessageBox::Cancel);
        if(respuestaButton == QMessageBox::Yes){
            LoteVacunasClass *loteEliminado = new LoteVacunasClass();
            loteEliminado = this->seleccionarLoteV(ui->twLotes->item(ui->twLotes->currentRow(),0)->text());
            loteEliminado->setEstado(false);
            this->listadoLoteV(this->listaLoteV);
        }
        else{
            return;
        }

    }
    else{
        QMessageBox::critical(this, "", "Debe Seleccionar un lote");
    }
}

void FrmAdministrarLotes::on_ActualizarLote_clicked()
{
    if(ui->twLotes->currentIndex().isValid()){
        int tipo;
        LoteVacunasClass *loteActualizado = new LoteVacunasClass();
        loteActualizado = this->seleccionarLoteV(ui->twLotes->item(ui->twLotes->currentRow(),0)->text());
        FrmActualizarLotes *frmActualizarLote = new FrmActualizarLotes();
        frmActualizarLote->setListaLote(this->getListaLoteV());
        frmActualizarLote->setLote(loteActualizado);
        frmActualizarLote->asignarValores();
        tipo = frmActualizarLote->exec();
        if(tipo == QDialog::Rejected){
            this->listadoLoteV(this->listaLoteV);
        }
    }
    else{
        QMessageBox::critical(this,"","Debe Seleccionar un Lote");
    }
}


void FrmAdministrarLotes::on_Close_clicked()
{
    this->close();
}



void FrmAdministrarLotes::on_Buscar_clicked()
{
    ui->twLotes->setRowCount(0);
    NodoLoteClass *aux = new NodoLoteClass();
    aux = listaLoteV->getCab();
    int x = 0;
    while(aux != NULL){
        if(aux->getLoteV()->getNombre()==ui->txtNombreL->text()){
        this->mostrarFilaLotesV(x,aux);
        x++;
    }
    aux = aux->getSgte();
  }
    ui->txtNombreL->clear();
    ui->txtNombreL->setFocus();
}
