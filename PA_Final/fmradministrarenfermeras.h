#ifndef FMRADMINISTRARENFERMERAS_H
#define FMRADMINISTRARENFERMERAS_H

#include <QDialog>

namespace Ui {
class FmrAdministrarEnfermeras;
}

class FmrAdministrarEnfermeras : public QDialog
{
    Q_OBJECT

public:
    explicit FmrAdministrarEnfermeras(QWidget *parent = 0);
    ~FmrAdministrarEnfermeras();

private slots:
    void on_cmdAgregarEnfermera_clicked();

    void on_cmdCerrar_clicked();

private:
    Ui::FmrAdministrarEnfermeras *ui;
};

#endif // FMRADMINISTRARENFERMERAS_H
