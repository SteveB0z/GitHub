#include "campodagioco.h"

CampoDaGioco::CampoDaGioco()
{
	// creazione tessera vuota
    Tessera t; 
    for (int r = 0; r < 10; r++ ) {
        for (int c = 0; c < 10; c++ ) {
            mat [r][c] = t;
        }
    }
}
void CampoDaGioco::inserireTessera(Tessera pT, int pR, int pC) {
    mat [pR][pC] = pT;
}

//void CampoDaGioco::stampaCampoInConsole() {
//    for (int r = 0; r < 10; r++ ) {
//        for (int c = 0; c < 10; c++ ) {
//            mat [r][c].stampaLettera();
//            if (c == 9) {
//                std::cout << std::endl;
//            }
//        }
//    }
//}
