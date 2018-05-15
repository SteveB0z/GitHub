#include "listagiocatori.h"

void stampa(ListaGiocatori* pTesta){
    /*if(pTesta == nullptr)
        return;
    listaGiocatori* supporto = pTesta;
    std::cout <<  supporto->g.stampaNome(); << std::endl;
    supporto = supporto->nextptr;
    while(supporto != pTesta){
        std::cout <<  supporto->g.stampaNome(); << std::endl;
        supporto = supporto->nextptr;
    }*/
}

void inserimentoCoda(ListaGiocatori* &pTesta, Giocatore pG){
    ListaGiocatori* nuovoNodo = new ListaGiocatori;
    if(pTesta == nullptr){
        nuovoNodo->g = pG;
        nuovoNodo->nextptr = nuovoNodo;
        pTesta = nuovoNodo;
    }
    ListaGiocatori* supporto = pTesta;
    nuovoNodo->g = pG;
    nuovoNodo->nextptr = pTesta;
    while(pTesta != supporto->nextptr)
        supporto = supporto->nextptr;
    supporto->nextptr = nuovoNodo;
}

void distruzione(ListaGiocatori* &pTesta){
    ListaGiocatori* supporto = pTesta;
    pTesta = pTesta->nextptr;
    supporto->nextptr = nullptr;
    while(pTesta->nextptr != nullptr){
        supporto = pTesta;
        pTesta = pTesta->nextptr;
        delete supporto;
        supporto = nullptr;
    }
    pTesta = nullptr;
}
