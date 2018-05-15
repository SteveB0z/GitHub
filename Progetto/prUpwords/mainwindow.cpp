#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, ListaGiocatori* pLista, Sacchettino &pSacchettino) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lista = pLista;
    sacchettino = pSacchettino;
    modalitaLettera = false;
    ui->lbRc2->hide();

    //CREO LISTA GIOCATORI E GIOCATORI
    caricaInfoGiocatore();
    caricaCampoGioco();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::caricaCampoGioco(){
    for(int r=0; r<ui->glGameBoard->rowCount(); ++r){
        for(int c=0; c<ui->glGameBoard->columnCount(); ++c){
            ui->glGameBoard->itemAtPosition(r,c)->
                    //->setText(campo[r][c].getLettera);
        }
    }

}

void MainWindow::salvaCampoGioco(){
    for(int r=0; r<ui->glGameBoard->rowCount(); ++r){
        for(int c=0; c<ui->glGameBoard->columnCount(); ++c){
          //  campo[r][c] = ui->glGameBoard->itemAtPosition(r,c);
        }
    }
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
    caricaRaccoglitoreGrafico();
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

void MainWindow::caricaRaccoglitoreGrafico(){
    ui->btRc0->setText(lista->g.raccoglitore.getElementoRaccoglitore(0));
    ui->btRc1->setText(lista->g.raccoglitore.getElementoRaccoglitore(1));
    ui->btRc2->setText(lista->g.raccoglitore.getElementoRaccoglitore(2));
    ui->btRc3->setText(lista->g.raccoglitore.getElementoRaccoglitore(3));
    ui->btRc4->setText(lista->g.raccoglitore.getElementoRaccoglitore(4));
    ui->btRc5->setText(lista->g.raccoglitore.getElementoRaccoglitore(5));
    ui->btRc6->setText(lista->g.raccoglitore.getElementoRaccoglitore(6));
}

void MainWindow::caricaRaccoglitoreGrafico(int pI){
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
    caricaRaccoglitoreGrafico();
}

void MainWindow::on_btFine_clicked()
{
    int i=1;
    for(int r=0; r<ui->glGameBoard->rowCount(); ++r){
        for(int c=0; c<ui->glGameBoard->columnCount(); ++c){
            campo[r][c] = i;
            ++i;
        }
    }

    caricaCampoGioco();

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
        caricaRaccoglitoreGrafico(0);
    }else{

    }

}

void MainWindow::on_btRc1_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 1);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(1);
    }else{

    }
}

void MainWindow::on_btRc2_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 2);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(2);
    }else{

    }
}

void MainWindow::on_btRc3_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 3);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(3);
    }else{

    }
}

void MainWindow::on_btRc4_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 4);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(4);
    }else{

    }
}

void MainWindow::on_btRc5_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 5);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(5);
    }else{

    }
}

void MainWindow::on_btRc6_clicked()
{
    if(modalitaLettera){
        lista->g.raccoglitore.cambiaTessera(sacchettino, 6);
        modalitaLettera = false;
        caricaRaccoglitoreGrafico(6);
    }else{

    }
}
