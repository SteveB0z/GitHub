#include "lobby.h"
#include "ui_lobby.h"

Lobby::Lobby(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lobby)
{
    ui->setupUi(this);
    ui->swPage->setCurrentIndex(0);
    ui->btIndietro->setEnabled(false);
}

Lobby::~Lobby()
{
    delete ui;
}

void Lobby::hideElementsSecondPage(int pNGiocatori){
    ui->lbGiocatoreDue->setVisible(false);
    ui->txGiocatoreDue->setVisible(false);
    ui->lbGiocatoreTre->setVisible(false);
    ui->txGiocatoreTre->setVisible(false);
    ui->lbGiocatoreQuattro->setVisible(false);
    ui->txGiocatoreQuattro->setVisible(false);
    if(pNGiocatori == 1) return;

    switch(pNGiocatori){
    case 2:
        ui->lbGiocatoreDue->setVisible(true);
        ui->txGiocatoreDue->setVisible(true);
        break;
    case 3:
        ui->lbGiocatoreDue->setVisible(true);
        ui->txGiocatoreDue->setVisible(true);
        ui->lbGiocatoreTre->setVisible(true);
        ui->txGiocatoreTre->setVisible(true);
        break;
    case 4:
        ui->lbGiocatoreDue->setVisible(true);
        ui->txGiocatoreDue->setVisible(true);
        ui->lbGiocatoreTre->setVisible(true);
        ui->txGiocatoreTre->setVisible(true);
        ui->lbGiocatoreQuattro->setVisible(true);
        ui->txGiocatoreQuattro->setVisible(true);
        break;
    default:
        std::cerr << "ERRORE: numero di Giocatori non valido" << std::endl;
    }
}

bool Lobby::checkAllNames(){
    for(auto c: nomiGiocatori)
        if(c == '\0'){
            ui->lbErrore->setText("Inserire il nome di tutti i giocatori");
            return false;
        }
    return true;
}

void Lobby::resetNomi(){
    while (!nomiGiocatori.empty())
    {
        nomiGiocatori.pop_back();
    }

}

void Lobby::on_btUnGiocatore_clicked()
{
    nGiocatori = 1;
    hideElementsSecondPage(nGiocatori);
    ui->swPage->setCurrentIndex(1);
    ui->btIndietro->setEnabled(true);
}

void Lobby::on_btDueGiocatori_clicked()
{
    nGiocatori = 2;
    hideElementsSecondPage(nGiocatori);
    ui->swPage->setCurrentIndex(1);
    ui->btIndietro->setEnabled(true);
}

void Lobby::on_btTreGiocatori_clicked()
{
    nGiocatori = 3;
    hideElementsSecondPage(nGiocatori);
    ui->swPage->setCurrentIndex(1);
    ui->btIndietro->setEnabled(true);
}

void Lobby::on_btQuattroGiocatori_clicked()
{
    nGiocatori = 4;
    hideElementsSecondPage(nGiocatori);
    ui->swPage->setCurrentIndex(1);
    ui->btIndietro->setEnabled(true);
}

void Lobby::on_btStart_clicked()
{
    resetNomi();

    switch(nGiocatori){
    case 1:
        nomiGiocatori.push_back(ui->txGiocatoreUno->text());
        break;
    case 2:
        nomiGiocatori.push_back(ui->txGiocatoreUno->text());
        nomiGiocatori.push_back(ui->txGiocatoreDue->text());
        break;
    case 3:
        nomiGiocatori.push_back(ui->txGiocatoreUno->text());
        nomiGiocatori.push_back(ui->txGiocatoreDue->text());
        nomiGiocatori.push_back(ui->txGiocatoreTre->text());
        break;
    case 4:
        nomiGiocatori.push_back(ui->txGiocatoreUno->text());
        nomiGiocatori.push_back(ui->txGiocatoreDue->text());
        nomiGiocatori.push_back(ui->txGiocatoreTre->text());
        nomiGiocatori.push_back(ui->txGiocatoreQuattro->text());
        break;
    default:
        std::cerr << "ERRORE: numero di Giocatori non valido" << std::endl;
    }
    if(!checkAllNames())
        return;

    MainWindow* w = new MainWindow(this, nomiGiocatori);
    w->show();
    this->hide();
}

void Lobby::on_btIndietro_clicked()
{
    int i =  ui->swPage->currentIndex();
    ui->swPage->setCurrentIndex(i-1);
    ui->lbErrore->setText("\0");
    ui->btIndietro->setEnabled(false);
}
