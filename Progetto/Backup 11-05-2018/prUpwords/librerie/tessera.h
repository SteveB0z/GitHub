#ifndef TESSERA_H
#define TESSERA_H
#include <iostream>
#include <QChar>
//CONTROLLARE SE USARE CHAR O QCHAR
class Tessera{
public:
    Tessera ();
    Tessera (QChar pLettera);
    ~Tessera();
    void stampaLettera();
    QChar getLettera();

private:
    QChar lettera;
    //int altezza;
};

#endif //TESSERA_H
