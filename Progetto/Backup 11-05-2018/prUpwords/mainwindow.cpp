#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, std::vector<QString> const &pNomiGiocatori) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nomiGiocatori = pNomiGiocatori;
    lista = nullptr;
    //CREO LISTA GIOCATORI E GIOCATORI
    creaListaGiocatori();
    caricaInfoGiocatore();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::caricaInfoGiocatore(){
    /*COSE DA FARE NELLA MAINWINDOWS:
     * 0) CREARE LISTA E GIOCATORI
     * 2) SCRIVERE NOME SULLA LABEL DEL PRIMO GIOCATORE
     */

    //SETTO NOME DEL PRIMO GICATORE
    ui->lbNomeTurno2->setText(lista->g.getNome());

    //INIZIALIZZO RACCOLGLITORE PRIMO GIOCATORE
    resetRaccoglitoreGrafico();
    setRaccoglitoreGrafico(lista->g);
}

void MainWindow::creaListaGiocatori(){
    //CREO I GIOCATORI E CARICO LA LISTA GIOCATORI
    srand(time(0));
    std::vector<QString> copiaNomiGiocatori = nomiGiocatori;
    for (int i = nomiGiocatori.size(); i > 0; --i ){
        int n = rand() % i;
        Giocatore g(copiaNomiGiocatori[n], sacchettino);
        inserimentoCoda(lista, g);
        copiaNomiGiocatori.erase(copiaNomiGiocatori.begin()+n);
    }
}

void MainWindow::resetRaccoglitoreGrafico(){
    ui->btRc0->setText("\0");
    ui->btRc1->setText("\0");
    ui->btRc2->setText("\0");
    ui->btRc3->setText("\0");
    ui->btRc4->setText("\0");
    ui->btRc5->setText("\0");
    ui->btRc6->setText("\0");
}

void MainWindow::setRaccoglitoreGrafico(Giocatore pG){
    ui->btRc0->setText(pG.raccoglitore.getElementoRaccoglitore(0));
    ui->btRc1->setText(pG.raccoglitore.getElementoRaccoglitore(1));
    ui->btRc2->setText(pG.raccoglitore.getElementoRaccoglitore(2));
    ui->btRc3->setText(pG.raccoglitore.getElementoRaccoglitore(3));
    ui->btRc4->setText(pG.raccoglitore.getElementoRaccoglitore(4));
    ui->btRc5->setText(pG.raccoglitore.getElementoRaccoglitore(5));
    ui->btRc6->setText(pG.raccoglitore.getElementoRaccoglitore(6));
}

void MainWindow::on_btPassaTurno_clicked()
{
    lista = lista->nextptr;
    caricaInfoGiocatore();
}

void MainWindow::on_btCambiaLettere_clicked()
{

}
