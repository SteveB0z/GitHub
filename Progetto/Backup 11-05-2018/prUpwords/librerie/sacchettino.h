#ifndef SACCHETTINO_H
#define SACCHETTINO_H
#include <cstdlib>
#include <ctime>
#include <vector>
#include "tessera.h"
//CONTROLLARE SE USARE CHAR O QCHAR
class Sacchettino {
public:
    Sacchettino ();
    ~Sacchettino();
    void aggiungiTessera(QChar pC);
    Tessera estraiTessera();
	
private:
    std::vector <Tessera> sacchettino;
};

#endif // SACCHETTINO_H
