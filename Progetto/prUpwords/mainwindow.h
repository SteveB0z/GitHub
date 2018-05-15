#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "librerie\giocatore.h"
#include "librerie\listagiocatori.h"
#include "librerie\campodagioco.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, ListaGiocatori* pLista, Sacchettino &pSacchettino);
    ~MainWindow();

private slots:
    void on_btPassaTurno_clicked();

    void on_btCambiaLettere_clicked();

    void on_btMescola_clicked();

    void on_btFine_clicked();

    void on_btRc0_clicked();

    void on_btRc1_clicked();

    void on_btRc2_clicked();

    void on_btRc3_clicked();

    void on_btRc4_clicked();

    void on_btRc5_clicked();

    void on_btRc6_clicked();

private:
    Ui::MainWindow *ui;
    ListaGiocatori* lista;
    Sacchettino sacchettino;
    bool modalitaLettera;
    CampoDaGioco campo;

    void caricaInfoGiocatore();

    void caricaRaccoglitoreGrafico();
    void caricaRaccoglitoreGrafico(int pI);
    void resetRaccoglitoreGrafico();
    void caricaCampoGioco();
    void salvaCampoGioco();

};

#endif // MAINWINDOW_H
