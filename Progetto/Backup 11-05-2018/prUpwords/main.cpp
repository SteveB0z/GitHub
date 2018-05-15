#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*Lobby l;
       l.show();*/

    //PER TESTARE LA MAINWINDOW
    std::vector<QString> nomiGiocatori;


    nomiGiocatori.push_back("Andrea");
    nomiGiocatori.push_back("Bartolomeo");
    nomiGiocatori.push_back("Carlo");
    nomiGiocatori.push_back("Davide");

    MainWindow *w = new MainWindow(0, nomiGiocatori);
    w->show();


    return a.exec();
}
