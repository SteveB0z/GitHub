#ifndef CAMPODAGIOCO_H
#define CAMPODAGIOCO_H
#include <iostream>
#include "tessera.h"

class CampoDaGioco{
public:
    CampoDaGioco();
	//~CampoDaGioco();
    void inserireTessera(Tessera pT, int pR, int pC);
    //void stampaCampoInConsole();

private:
    Tessera mat [10][10];
};

#endif // CAMPODAGIOCO_H
