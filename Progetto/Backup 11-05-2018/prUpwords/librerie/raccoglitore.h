#ifndef RACCOGLITORE_H
#define RACCOGLITORE_H
#include "tessera.h"
#include "sacchettino.h"

class Raccoglitore{
public:
   // Raccoglitore();
    void inizializzaRaccoglitore(Sacchettino &pSacchettino);
    QChar getElementoRaccoglitore(int pI);
    //~Raccoglitore();
private:
    Tessera raccoglitore[7];

    //void inserimento();
    void rimozione(int pPos);
    void scambio(int pPos, Tessera pT, Sacchettino pSacchettino);
    int dimensione(); // conta le lettere giocabili

};
#endif // RACCOGLITORE_H
