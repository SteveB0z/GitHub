#include "tessera.h"

Tessera::Tessera () {
    lettera = '\0';
}
Tessera::Tessera (QChar pLettera) {
    lettera = pLettera;
}
Tessera::~Tessera() {}

void Tessera::stampaLettera(){
   qDebug()<< lettera << "\n";
}
QChar Tessera::getLettera(){
    return lettera;
}
void Tessera::setLettera(QChar pLettera){
    lettera = pLettera;
}

