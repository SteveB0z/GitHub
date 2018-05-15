#ifndef GIOCATORE_H
#define GIOCATORE_H
#include <QString>
#include "raccoglitore.h"
#include <QDebug>
//#include "sacchettino.h"

class Giocatore{
public:
    Giocatore();
    Giocatore(QString pNome, Sacchettino &pSacchettino);
    
    //  ~Giocatore();
    void setNome(QString pNome);
    void stampaNome();
    QString getNome();
    QString getPunteggio();
    Raccoglitore raccoglitore;
private:
    QString nome;
    int punteggio;
    //DA VEDERE SE PRIVATO O PUBBLICO
    //Raccoglitore raccoglitore;
};

#endif //GIOCATORE_H
