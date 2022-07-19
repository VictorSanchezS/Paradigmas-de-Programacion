#include <restaurante.h>
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);   // metodo virtual puro
    ~MainWindow();          //destructor
    Restaurante *getRest() const;
    void setRest(Restaurante *value);

private slots:
    void on_actionRegistrar_Venta_triggered();

    void on_actionListar_Productos_stock_triggered();

private:
    Ui::MainWindow *ui;     //metodo estatico
    Restaurante *rest;
};

#endif // MAINWINDOW_H
