#include "tessera.h"

Tessera::Tessera () {
    lettera = '\0';
}
Tessera::Tessera (QChar pLettera) {
    lettera = pLettera;
}
Tessera::~Tessera() {}

//void Tessera::stampaLettera(){
//    std::cout << lettera;
//}
QChar Tessera::getLettera(){
    return lettera;
}
