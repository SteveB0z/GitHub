#include "mainwindow.h"
#include <QApplication>
#include "lobby.h"

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   /*  Lobby l;
       l.show();
*/
    //PER TESTARE LA MAINWINDOW  
    ListaGiocatori* lista=nullptr;
    Sacchettino sacchettino;

    Giocatore g1("Andrea", sacchettino);
    inserimentoCoda(lista, g1);
    Giocatore g2("Bartolomeo", sacchettino);
    inserimentoCoda(lista, g2);
    Giocatore g3("Carlo", sacchettino);
    inserimentoCoda(lista, g3);
    Giocatore g4("Davide", sacchettino);
    inserimentoCoda(lista, g4);


    MainWindow *w = new MainWindow(0, lista, sacchettino);
    w->show();


    return a.exec();
}
