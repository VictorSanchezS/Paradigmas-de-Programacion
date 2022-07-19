#ifndef FRMLISTAMEDICAMENTOS_H
#define FRMLISTAMEDICAMENTOS_H

#include <QDialog>

namespace Ui {
class FrmListaMedicamentos;
}

class FrmListaMedicamentos : public QDialog
{
    Q_OBJECT

public:
    explicit FrmListaMedicamentos(QWidget *parent = 0);
    ~FrmListaMedicamentos();

private:
    Ui::FrmListaMedicamentos *ui;
};

#endif // FRMLISTAMEDICAMENTOS_H
