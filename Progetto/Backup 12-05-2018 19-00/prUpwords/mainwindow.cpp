#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, std::vector<QString> const &pNomiGiocatori) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nomiGiocatori = pNomiGiocatori;
    lista = nullptr;
    modalitaLettera = false;
    ui->lbRc2->hide();

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

    //SETTO NOME DEL PRIMO GICATORE E PUNTEGGIO
    ui->lbNomeTurno2->setText(lista->g.getNome());
    ui->lbPunteggio2->setText(lista->g.getPunteggio());

    //INIZIALIZZO RACCOLGLITORE PRIMO GIOCATORE
    resetRaccoglitoreGrafico();
    setRaccoglitoreGrafico();

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

void MainWindow::setRaccoglitoreGrafico(){
    ui->btRc0->setText(lista->g.raccoglitore.getElementoRaccoglitore(0));
    ui->btRc1->setText(lista->g.raccoglitore.getElementoRaccoglitore(1));
    ui->btRc2->setText(lista->g.raccoglitore.getElementoRaccoglitore(2));
    ui->btRc3->setText(lista->g.raccoglitore.getElementoRaccoglitore(3));
    ui->btRc4->setText(lista->g.raccoglitore.getElementoRaccoglitore(4));
    ui->btRc5->setText(lista->g.raccoglitore.getElementoRaccoglitore(5));
    ui->btRc6->setText(lista->g.raccoglitore.getElementoRaccoglitore(6));
}

void MainWindow::setRaccoglitoreGrafico(int pI){
    switch(pI){
    case 0:
        ui->btRc0->setText(lista->g.raccoglitore.getElementoRaccoglitore(0));
        break;
    case 1:
        ui->btRc1->setText(lista->g.raccoglitore.getElementoRaccoglitore(1));
        break;
    case 2:
        ui->btRc2->setText(lista->g.raccoglitore.getElementoRaccoglitore(2));
        break;
    case 3:
        ui->btRc3->setText(lista->g.raccoglitore.getElementoRaccoglitore(3));
        break;
    case 4:
        ui->btRc4->setText(lista->g.raccoglitore.getElementoRaccoglitore(4));
        break;
    case 5:
        ui->btRc5->setText(lista->g.raccoglitore.getElementoRaccoglitore(5));
        break;
    case 6:
        ui->btRc6->setText(lista->g.raccoglitore.getElementoRaccoglitore(6));
        break;
    default:
        std::cerr << "Errore";
    }
}

void MainWindow::on_btPassaTurno_clicked()
{
    lista = lista->nextptr;
    caricaInfoGiocatore();

}

void MainWindow::on_btCambiaLettere_clicked()
{
    ui->lbRc2->show();
    modalitaLettera = true;
}

void MainWindow::on_btMescola_clicked()
{
    lista->g.raccoglitore.mescola();
    setRaccoglitoreGrafico();
}

void MainWindow::on_btFine_clicked()
{
    /*FINE DELLA PARTITA:
    - calcolo del punteggio finale
    - distruggere lista e tutto
    */
}

void MainWindow::on_btRc0_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino,0);
        modalitaLettera = false;
        setRaccoglitoreGrafico(0);
    }else{

    }

}

void MainWindow::on_btRc1_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 1);
        modalitaLettera = false;
        setRaccoglitoreGrafico(1);
    }else{

    }
}

void MainWindow::on_btRc2_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 2);
        modalitaLettera = false;
        setRaccoglitoreGrafico(2);
    }else{

    }
}

void MainWindow::on_btRc3_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 3);
        modalitaLettera = false;
        setRaccoglitoreGrafico(3);
    }else{

    }
}

void MainWindow::on_btRc4_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 4);
        modalitaLettera = false;
        setRaccoglitoreGrafico(4);
    }else{

    }
}

void MainWindow::on_btRc5_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 5);
        modalitaLettera = false;
        setRaccoglitoreGrafico(5);
    }else{

    }
}

void MainWindow::on_btRc6_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 6);
        modalitaLettera = false;
        setRaccoglitoreGrafico(6);
    }else{

    }
}
