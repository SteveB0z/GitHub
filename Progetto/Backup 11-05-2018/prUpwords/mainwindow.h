#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "librerie\giocatore.h"
#include "librerie\listagiocatori.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, const std::vector<QString> &pNomiGiocatori);
    ~MainWindow();

private slots:
    void on_btPassaTurno_clicked();

    void on_btCambiaLettere_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<QString> nomiGiocatori;
    ListaGiocatori* lista;
    Sacchettino sacchettino;

    void caricaInfoGiocatore();
    void creaListaGiocatori();
    void setRaccoglitoreGrafico(Giocatore pG);
    void resetRaccoglitoreGrafico();
};

#endif // MAINWINDOW_H
