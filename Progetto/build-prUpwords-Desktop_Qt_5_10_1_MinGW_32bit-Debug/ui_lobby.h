/********************************************************************************
** Form generated from reading UI file 'lobby.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBY_H
#define UI_LOBBY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lobby
{
public:
    QLabel *lbTitolo;
    QStackedWidget *swPage;
    QWidget *pageOne;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btUnGiocatore;
    QPushButton *btDueGiocatori;
    QPushButton *btTreGiocatori;
    QPushButton *btQuattroGiocatori;
    QWidget *pageTwo;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *lbGiocatoreUno;
    QLineEdit *txGiocatoreUno;
    QLabel *lbGiocatoreDue;
    QLineEdit *txGiocatoreDue;
    QLabel *lbGiocatoreTre;
    QLineEdit *txGiocatoreTre;
    QLabel *lbGiocatoreQuattro;
    QLineEdit *txGiocatoreQuattro;
    QLabel *lbErrore;
    QPushButton *btStart;
    QPushButton *btIndietro;

    void setupUi(QWidget *Lobby)
    {
        if (Lobby->objectName().isEmpty())
            Lobby->setObjectName(QStringLiteral("Lobby"));
        Lobby->resize(598, 426);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        Lobby->setFont(font);
        lbTitolo = new QLabel(Lobby);
        lbTitolo->setObjectName(QStringLiteral("lbTitolo"));
        lbTitolo->setGeometry(QRect(10, 8, 571, 71));
        QFont font1;
        font1.setPointSize(32);
        lbTitolo->setFont(font1);
        lbTitolo->setAlignment(Qt::AlignCenter);
        swPage = new QStackedWidget(Lobby);
        swPage->setObjectName(QStringLiteral("swPage"));
        swPage->setGeometry(QRect(20, 80, 521, 301));
        swPage->setStyleSheet(QStringLiteral(""));
        pageOne = new QWidget();
        pageOne->setObjectName(QStringLiteral("pageOne"));
        verticalLayoutWidget = new QWidget(pageOne);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 10, 501, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btUnGiocatore = new QPushButton(verticalLayoutWidget);
        btUnGiocatore->setObjectName(QStringLiteral("btUnGiocatore"));
        btUnGiocatore->setEnabled(true);

        verticalLayout->addWidget(btUnGiocatore);

        btDueGiocatori = new QPushButton(verticalLayoutWidget);
        btDueGiocatori->setObjectName(QStringLiteral("btDueGiocatori"));
        btDueGiocatori->setEnabled(true);

        verticalLayout->addWidget(btDueGiocatori);

        btTreGiocatori = new QPushButton(verticalLayoutWidget);
        btTreGiocatori->setObjectName(QStringLiteral("btTreGiocatori"));

        verticalLayout->addWidget(btTreGiocatori);

        btQuattroGiocatori = new QPushButton(verticalLayoutWidget);
        btQuattroGiocatori->setObjectName(QStringLiteral("btQuattroGiocatori"));

        verticalLayout->addWidget(btQuattroGiocatori);

        swPage->addWidget(pageOne);
        pageTwo = new QWidget();
        pageTwo->setObjectName(QStringLiteral("pageTwo"));
        formLayoutWidget = new QWidget(pageTwo);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(13, 10, 491, 291));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        lbGiocatoreUno = new QLabel(formLayoutWidget);
        lbGiocatoreUno->setObjectName(QStringLiteral("lbGiocatoreUno"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lbGiocatoreUno);

        txGiocatoreUno = new QLineEdit(formLayoutWidget);
        txGiocatoreUno->setObjectName(QStringLiteral("txGiocatoreUno"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txGiocatoreUno);

        lbGiocatoreDue = new QLabel(formLayoutWidget);
        lbGiocatoreDue->setObjectName(QStringLiteral("lbGiocatoreDue"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lbGiocatoreDue);

        txGiocatoreDue = new QLineEdit(formLayoutWidget);
        txGiocatoreDue->setObjectName(QStringLiteral("txGiocatoreDue"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txGiocatoreDue);

        lbGiocatoreTre = new QLabel(formLayoutWidget);
        lbGiocatoreTre->setObjectName(QStringLiteral("lbGiocatoreTre"));

        formLayout->setWidget(2, QFormLayout::LabelRole, lbGiocatoreTre);

        txGiocatoreTre = new QLineEdit(formLayoutWidget);
        txGiocatoreTre->setObjectName(QStringLiteral("txGiocatoreTre"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txGiocatoreTre);

        lbGiocatoreQuattro = new QLabel(formLayoutWidget);
        lbGiocatoreQuattro->setObjectName(QStringLiteral("lbGiocatoreQuattro"));

        formLayout->setWidget(3, QFormLayout::LabelRole, lbGiocatoreQuattro);

        txGiocatoreQuattro = new QLineEdit(formLayoutWidget);
        txGiocatoreQuattro->setObjectName(QStringLiteral("txGiocatoreQuattro"));

        formLayout->setWidget(3, QFormLayout::FieldRole, txGiocatoreQuattro);

        lbErrore = new QLabel(formLayoutWidget);
        lbErrore->setObjectName(QStringLiteral("lbErrore"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        lbErrore->setFont(font2);

        formLayout->setWidget(6, QFormLayout::SpanningRole, lbErrore);

        btStart = new QPushButton(formLayoutWidget);
        btStart->setObjectName(QStringLiteral("btStart"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, btStart);

        swPage->addWidget(pageTwo);
        btIndietro = new QPushButton(Lobby);
        btIndietro->setObjectName(QStringLiteral("btIndietro"));
        btIndietro->setEnabled(false);
        btIndietro->setGeometry(QRect(570, 10, 21, 23));

        retranslateUi(Lobby);

        swPage->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Lobby);
    } // setupUi

    void retranslateUi(QWidget *Lobby)
    {
        Lobby->setWindowTitle(QApplication::translate("Lobby", "Lobby", nullptr));
        lbTitolo->setText(QApplication::translate("Lobby", "UPWORDS", nullptr));
        btUnGiocatore->setText(QApplication::translate("Lobby", "UN GIOCATORE", nullptr));
#ifndef QT_NO_TOOLTIP
        btDueGiocatori->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btDueGiocatori->setText(QApplication::translate("Lobby", "DUE GIOCATORI", nullptr));
        btTreGiocatori->setText(QApplication::translate("Lobby", "TRE GIOCATORI", nullptr));
        btQuattroGiocatori->setText(QApplication::translate("Lobby", "QUATTRO GIOCATORI", nullptr));
        lbGiocatoreUno->setText(QApplication::translate("Lobby", "Giocatore Uno", nullptr));
        lbGiocatoreDue->setText(QApplication::translate("Lobby", "Giocatore Due", nullptr));
        lbGiocatoreTre->setText(QApplication::translate("Lobby", "Giocatore Tre", nullptr));
        lbGiocatoreQuattro->setText(QApplication::translate("Lobby", "<html><head/><body><p>Giocatore Quattro:</p></body></html>", nullptr));
        lbErrore->setText(QString());
        btStart->setText(QApplication::translate("Lobby", "START", nullptr));
        btIndietro->setText(QApplication::translate("Lobby", "<", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lobby: public Ui_Lobby {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBY_H
