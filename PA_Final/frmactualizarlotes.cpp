#include "frmactualizarlotes.h"
#include "ui_frmactualizarlotes.h"
#include "QMessageBox"


FrmActualizarLotes::FrmActualizarLotes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FrmActualizarLotes)
{
    ui->setupUi(this);
}

FrmActualizarLotes::~FrmActualizarLotes()
{
    delete ui;
}

ListaLoteVacunasClass *FrmActualizarLotes::getListaLote() const
{
    return listaLote;
}

void FrmActualizarLotes::setListaLote(ListaLoteVacunasClass *value)
{
    listaLote = value;
}


LoteVacunasClass *FrmActualizarLotes::getLote() const
{
return lote;
}

void FrmActualizarLotes::setLote(LoteVacunasClass *value)
{
    lote = value;
}




void FrmActualizarLotes::asignarValores()
{
    ui->txtN->setText(this->lote->getNombre());

}

void FrmActualizarLotes::on_Grab_clicked()
{
    if(ui->txtN->text().isEmpty()){
        QMessageBox::critical(this,"Error","Falta Nombre");
        return;
    }
    QString nombre=this->ui->txtN->text();
    bool estado = this->ui->habilitad->isChecked();
    QString Cantidad= this->ui->Cant->text();
    QString fecha= this->ui->Fech->text();
    LoteVacunasClass *lote = new LoteVacunasClass (this->lote->getCodigo(),nombre, Cantidad,fecha,estado);
    this->listaLote->cambiarValor(lote);
    QMessageBox::information(this,"","Actualizado Correctamente");
}

void FrmActualizarLotes::on_Cerr_clicked()
{
    this->close();
}
