#ifndef FMRACTUALIZARENFERMERA_H
#define FMRACTUALIZARENFERMERA_H

#include "listaenfermeras.h"

#include <QDialog>

namespace Ui {
class fmrActualizarEnfermera;
}

class fmrActualizarEnfermera : public QDialog
{
    Q_OBJECT

public:
    explicit fmrActualizarEnfermera(QWidget *parent = 0);
    ~fmrActualizarEnfermera();

    ListaEnfermeras *getListaEnfermeras() const;
    void setListaEnfermeras(ListaEnfermeras *value);

    EnfermeraClass *getEnfermera() const;
    void setEnfermera(EnfermeraClass *value);

    void asignarValoresEnfermera();
private slots:
    void on_cmdCancelar_clicked();

    void on_cmdActualizar_clicked();

private:
    Ui::fmrActualizarEnfermera *ui;
    ListaEnfermeras *listaEnfermeras;
    EnfermeraClass *enfermera;
};

#endif // FMRACTUALIZARENFERMERA_H
