#include "giocatore.h"

//CONTROLLARE PERCHE SE TOLGO QUESTO COSTRUTTORE NON FUNZIONA LA LISTAGIOCATORI
Giocatore::Giocatore(){
    nome = "\0";
    punteggio = 0;
}

Giocatore::Giocatore(QString pNome, Sacchettino &pSacchettino){
    nome = pNome;
    punteggio = 0;
    raccoglitore.inizializzaRaccoglitore(pSacchettino);
}

void Giocatore::setNome(QString pNome){
    nome = pNome;
}
QString Giocatore::getNome(){
    return nome;
}
QString Giocatore::getPunteggio(){
    QString s = QString::number(punteggio);
    return s;
}

