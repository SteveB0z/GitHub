#ifndef TESSERA_H
#define TESSERA_H
#include <iostream>
#include <QDebug>
#include <QChar>

//CONTROLLARE SE USARE CHAR O QCHAR
class Tessera{
public:
    Tessera ();
    Tessera (QChar pLettera);
    ~Tessera();
    void stampaLettera();
    QChar getLettera();
    void setLettera(QChar pLettera);

private:
    QChar lettera;
    //int altezza;
};

#endif //TESSERA_H
