#ifndef LOBBY_H
#define LOBBY_H

#include <QWidget>
#include "mainwindow.h"
#include <iostream>

namespace Ui {
class Lobby;
}

class Lobby : public QWidget
{
    Q_OBJECT

public:
    explicit Lobby(QWidget *parent = 0);
    ~Lobby();
	void hideElementsSecondPage(int pNGiocatori);
    bool checkAllNames();
    void resetNomi();

private slots:
    void on_btUnGiocatore_clicked();

    void on_btDueGiocatori_clicked();

    void on_btTreGiocatori_clicked();

    void on_btQuattroGiocatori_clicked();

    void on_btStart_clicked();

    void on_btIndietro_clicked();

private:
    Ui::Lobby *ui;
	 int nGiocatori;    
    std::vector<QString> nomiGiocatori;
};

#endif // LOBBY_H
