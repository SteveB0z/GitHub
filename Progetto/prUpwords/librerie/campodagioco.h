#ifndef CAMPODAGIOCO_H
#define CAMPODAGIOCO_H
#include <iostream>
#include <QDebug>
#include "tessera.h"

class CampoDaGioco{
public:
    CampoDaGioco();
	//~CampoDaGioco();
    void inserireTessera(Tessera pT, int pR, int pC);
    void stampaCampoInConsole();
    QChar getTessera(int pR, int pC);

private:
    Tessera mat [10][10];
};

#endif // CAMPODAGIOCO_H
