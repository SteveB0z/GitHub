#include "sacchettino.h"

Sacchettino::Sacchettino()
{
    for(int i = 0; i < 8; ++i)
        aggiungiTessera('E');
    for(int i = 0; i < 7; ++i){
        aggiungiTessera('A');
        aggiungiTessera('I');
        aggiungiTessera('O');
    }
    for(int i = 0; i < 6; ++i)
        aggiungiTessera('S');
    for(int i = 0; i < 5; ++i){
        aggiungiTessera('D');
        aggiungiTessera('L');
        aggiungiTessera('M');
        aggiungiTessera('N');
        aggiungiTessera('R');
        aggiungiTessera('T');
        aggiungiTessera('U');
    }
    for(int i = 0; i < 4; ++i)
        aggiungiTessera('C');
    for(int i = 0; i < 3; ++i){
        aggiungiTessera('B');
        aggiungiTessera('F');
        aggiungiTessera('G');
        aggiungiTessera('H');
        aggiungiTessera('P');
    }
    for(int i = 0; i < 2; ++i){
        aggiungiTessera('K');
        aggiungiTessera('W');
        aggiungiTessera('Y');
    }
    aggiungiTessera('J');
    aggiungiTessera('Q');
    aggiungiTessera('V');
    aggiungiTessera('X');
    aggiungiTessera('Z');
    //DA CONTROLLARE::::
    std::random_shuffle(&sacchettino[0], &sacchettino[100]);
}

Sacchettino::~Sacchettino() {}

void Sacchettino::aggiungiTessera(QChar pC) {
    Tessera t(pC);
    sacchettino.push_back(t);
}

Tessera Sacchettino::estraiTessera() {
    //mescolaSacchettino(); OPERAZIONE COSTOSA -_-
    Tessera t;
    srand(time(0));
    int i = rand() % sacchettino.size();
    t = sacchettino[i];
    sacchettino.erase(sacchettino.begin()+i);
    return t;
}

