/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *fmGameboard;
    QWidget *gridLayoutWidget;
    QGridLayout *glGameBoard;
    QPushButton *btGb52;
    QPushButton *btGb62;
    QPushButton *btGb80;
    QPushButton *btGb76;
    QPushButton *btGb71;
    QPushButton *btGb79;
    QPushButton *btGb81;
    QPushButton *btGb72;
    QPushButton *btGb66;
    QPushButton *btGb64;
    QPushButton *btGb70;
    QPushButton *btGb73;
    QPushButton *btGb82;
    QPushButton *btGb58;
    QPushButton *btGb54;
    QPushButton *btGb59;
    QPushButton *btGb07;
    QPushButton *btGb03;
    QPushButton *btGb10;
    QPushButton *btGb13;
    QPushButton *btGb05;
    QPushButton *btGb11;
    QPushButton *btGb14;
    QPushButton *btGb18;
    QPushButton *btGb16;
    QPushButton *btGb17;
    QPushButton *btGb15;
    QPushButton *btGb06;
    QPushButton *btGb08;
    QPushButton *btGb01;
    QPushButton *btGb02;
    QPushButton *btGb12;
    QPushButton *btGb04;
    QPushButton *btGb43;
    QPushButton *btGb09;
    QPushButton *btGb46;
    QPushButton *btGb37;
    QPushButton *btGb26;
    QPushButton *btGb42;
    QPushButton *btGb21;
    QPushButton *btGb39;
    QPushButton *btGb23;
    QPushButton *btGb40;
    QPushButton *btGb47;
    QPushButton *btGb28;
    QPushButton *btGb24;
    QPushButton *btGb22;
    QPushButton *btGb25;
    QPushButton *btGb33;
    QPushButton *btGb48;
    QPushButton *btGb49;
    QPushButton *btGb50;
    QPushButton *btGb36;
    QPushButton *btGb41;
    QPushButton *btGb30;
    QPushButton *btGb19;
    QPushButton *btGb31;
    QPushButton *btGb20;
    QPushButton *btGb27;
    QPushButton *btGb38;
    QPushButton *btGb44;
    QPushButton *btGb32;
    QPushButton *btGb34;
    QPushButton *btGb29;
    QPushButton *btGb68;
    QPushButton *btGb53;
    QPushButton *btGb69;
    QPushButton *btGb77;
    QPushButton *btGb65;
    QPushButton *btGb78;
    QPushButton *btGb74;
    QPushButton *btGb75;
    QPushButton *btGb61;
    QPushButton *btGb56;
    QPushButton *btGb67;
    QPushButton *btGb55;
    QPushButton *btGb57;
    QPushButton *btGb63;
    QPushButton *btGb60;
    QPushButton *btGb51;
    QPushButton *btGb87;
    QPushButton *btGb97;
    QPushButton *btGb99;
    QPushButton *btGb93;
    QPushButton *btGb84;
    QPushButton *btGb96;
    QPushButton *btGb88;
    QPushButton *btGb83;
    QPushButton *btGb98;
    QPushButton *btGb95;
    QPushButton *btGb85;
    QPushButton *btGb86;
    QPushButton *btGb89;
    QPushButton *btGb94;
    QPushButton *btGb91;
    QPushButton *btGb90;
    QPushButton *btGb92;
    QPushButton *btGb35;
    QPushButton *btGb00;
    QPushButton *btGb45;
    QFrame *fmRaccoglitore;
    QLabel *lbRc1;
    QPushButton *btMescola;
    QPushButton *btRichiamaLettere;
    QPushButton *btCambiaLettere;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btRc0;
    QPushButton *btRc1;
    QPushButton *btRc2;
    QPushButton *btRc3;
    QPushButton *btRc4;
    QPushButton *btRc5;
    QPushButton *btRc6;
    QLabel *lbRc2;
    QFrame *fmInfoBox;
    QLabel *lbNomeTurno1;
    QLabel *lbNomeTurno2;
    QPushButton *btSuggerimento;
    QPushButton *btPassaTurno;
    QPushButton *btFine;
    QPushButton *btParolaGiocata;
    QLabel *lbPunteggio1;
    QLabel *lbPunteggio2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1366, 1080);
        MainWindow->setMinimumSize(QSize(720, 1080));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fmGameboard = new QFrame(centralWidget);
        fmGameboard->setObjectName(QStringLiteral("fmGameboard"));
        fmGameboard->setGeometry(QRect(600, 0, 511, 512));
        fmGameboard->setFrameShape(QFrame::StyledPanel);
        fmGameboard->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(fmGameboard);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 5, 502, 502));
        glGameBoard = new QGridLayout(gridLayoutWidget);
        glGameBoard->setSpacing(0);
        glGameBoard->setContentsMargins(11, 11, 11, 11);
        glGameBoard->setObjectName(QStringLiteral("glGameBoard"));
        glGameBoard->setContentsMargins(0, 0, 0, 0);
        btGb52 = new QPushButton(gridLayoutWidget);
        btGb52->setObjectName(QStringLiteral("btGb52"));
        btGb52->setMinimumSize(QSize(50, 50));
        btGb52->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb52, 5, 2, 1, 1);

        btGb62 = new QPushButton(gridLayoutWidget);
        btGb62->setObjectName(QStringLiteral("btGb62"));
        btGb62->setMinimumSize(QSize(50, 50));
        btGb62->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb62, 6, 2, 1, 1);

        btGb80 = new QPushButton(gridLayoutWidget);
        btGb80->setObjectName(QStringLiteral("btGb80"));
        btGb80->setMinimumSize(QSize(50, 50));
        btGb80->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb80, 8, 0, 1, 1);

        btGb76 = new QPushButton(gridLayoutWidget);
        btGb76->setObjectName(QStringLiteral("btGb76"));
        btGb76->setMinimumSize(QSize(50, 50));
        btGb76->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb76, 7, 6, 1, 1);

        btGb71 = new QPushButton(gridLayoutWidget);
        btGb71->setObjectName(QStringLiteral("btGb71"));
        btGb71->setMinimumSize(QSize(50, 50));
        btGb71->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb71, 7, 1, 1, 1);

        btGb79 = new QPushButton(gridLayoutWidget);
        btGb79->setObjectName(QStringLiteral("btGb79"));
        btGb79->setMinimumSize(QSize(50, 50));
        btGb79->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb79, 7, 9, 1, 1);

        btGb81 = new QPushButton(gridLayoutWidget);
        btGb81->setObjectName(QStringLiteral("btGb81"));
        btGb81->setMinimumSize(QSize(50, 50));
        btGb81->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb81, 8, 1, 1, 1);

        btGb72 = new QPushButton(gridLayoutWidget);
        btGb72->setObjectName(QStringLiteral("btGb72"));
        btGb72->setMinimumSize(QSize(50, 50));
        btGb72->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb72, 7, 2, 1, 1);

        btGb66 = new QPushButton(gridLayoutWidget);
        btGb66->setObjectName(QStringLiteral("btGb66"));
        btGb66->setMinimumSize(QSize(50, 50));
        btGb66->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb66, 6, 6, 1, 1);

        btGb64 = new QPushButton(gridLayoutWidget);
        btGb64->setObjectName(QStringLiteral("btGb64"));
        btGb64->setMinimumSize(QSize(50, 50));
        btGb64->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb64, 6, 4, 1, 1);

        btGb70 = new QPushButton(gridLayoutWidget);
        btGb70->setObjectName(QStringLiteral("btGb70"));
        btGb70->setMinimumSize(QSize(50, 50));
        btGb70->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb70, 7, 0, 1, 1);

        btGb73 = new QPushButton(gridLayoutWidget);
        btGb73->setObjectName(QStringLiteral("btGb73"));
        btGb73->setMinimumSize(QSize(50, 50));
        btGb73->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb73, 7, 3, 1, 1);

        btGb82 = new QPushButton(gridLayoutWidget);
        btGb82->setObjectName(QStringLiteral("btGb82"));
        btGb82->setMinimumSize(QSize(50, 50));
        btGb82->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb82, 8, 2, 1, 1);

        btGb58 = new QPushButton(gridLayoutWidget);
        btGb58->setObjectName(QStringLiteral("btGb58"));
        btGb58->setMinimumSize(QSize(50, 50));
        btGb58->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb58, 5, 8, 1, 1);

        btGb54 = new QPushButton(gridLayoutWidget);
        btGb54->setObjectName(QStringLiteral("btGb54"));
        btGb54->setMinimumSize(QSize(50, 50));
        btGb54->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb54, 5, 4, 1, 1);

        btGb59 = new QPushButton(gridLayoutWidget);
        btGb59->setObjectName(QStringLiteral("btGb59"));
        btGb59->setMinimumSize(QSize(50, 50));
        btGb59->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb59, 5, 9, 1, 1);

        btGb07 = new QPushButton(gridLayoutWidget);
        btGb07->setObjectName(QStringLiteral("btGb07"));
        btGb07->setMinimumSize(QSize(50, 50));
        btGb07->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb07, 0, 7, 1, 1);

        btGb03 = new QPushButton(gridLayoutWidget);
        btGb03->setObjectName(QStringLiteral("btGb03"));
        btGb03->setMinimumSize(QSize(50, 50));
        btGb03->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb03, 0, 3, 1, 1);

        btGb10 = new QPushButton(gridLayoutWidget);
        btGb10->setObjectName(QStringLiteral("btGb10"));
        btGb10->setMinimumSize(QSize(50, 50));
        btGb10->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb10, 1, 0, 1, 1);

        btGb13 = new QPushButton(gridLayoutWidget);
        btGb13->setObjectName(QStringLiteral("btGb13"));
        btGb13->setMinimumSize(QSize(50, 50));
        btGb13->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb13, 1, 3, 1, 1);

        btGb05 = new QPushButton(gridLayoutWidget);
        btGb05->setObjectName(QStringLiteral("btGb05"));
        btGb05->setMinimumSize(QSize(50, 50));
        btGb05->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb05, 0, 5, 1, 1);

        btGb11 = new QPushButton(gridLayoutWidget);
        btGb11->setObjectName(QStringLiteral("btGb11"));
        btGb11->setMinimumSize(QSize(50, 50));
        btGb11->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb11, 1, 1, 1, 1);

        btGb14 = new QPushButton(gridLayoutWidget);
        btGb14->setObjectName(QStringLiteral("btGb14"));
        btGb14->setMinimumSize(QSize(50, 50));
        btGb14->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb14, 1, 4, 1, 1);

        btGb18 = new QPushButton(gridLayoutWidget);
        btGb18->setObjectName(QStringLiteral("btGb18"));
        btGb18->setMinimumSize(QSize(50, 50));
        btGb18->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb18, 1, 8, 1, 1);

        btGb16 = new QPushButton(gridLayoutWidget);
        btGb16->setObjectName(QStringLiteral("btGb16"));
        btGb16->setMinimumSize(QSize(50, 50));
        btGb16->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb16, 1, 6, 1, 1);

        btGb17 = new QPushButton(gridLayoutWidget);
        btGb17->setObjectName(QStringLiteral("btGb17"));
        btGb17->setMinimumSize(QSize(50, 50));
        btGb17->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb17, 1, 7, 1, 1);

        btGb15 = new QPushButton(gridLayoutWidget);
        btGb15->setObjectName(QStringLiteral("btGb15"));
        btGb15->setMinimumSize(QSize(50, 50));
        btGb15->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb15, 1, 5, 1, 1);

        btGb06 = new QPushButton(gridLayoutWidget);
        btGb06->setObjectName(QStringLiteral("btGb06"));
        btGb06->setMinimumSize(QSize(50, 50));
        btGb06->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb06, 0, 6, 1, 1);

        btGb08 = new QPushButton(gridLayoutWidget);
        btGb08->setObjectName(QStringLiteral("btGb08"));
        btGb08->setMinimumSize(QSize(50, 50));
        btGb08->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb08, 0, 8, 1, 1);

        btGb01 = new QPushButton(gridLayoutWidget);
        btGb01->setObjectName(QStringLiteral("btGb01"));
        btGb01->setMinimumSize(QSize(50, 50));
        btGb01->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb01, 0, 1, 1, 1);

        btGb02 = new QPushButton(gridLayoutWidget);
        btGb02->setObjectName(QStringLiteral("btGb02"));
        btGb02->setMinimumSize(QSize(50, 50));
        btGb02->setMaximumSize(QSize(50, 50));
        btGb02->setBaseSize(QSize(7, 0));

        glGameBoard->addWidget(btGb02, 0, 2, 1, 1);

        btGb12 = new QPushButton(gridLayoutWidget);
        btGb12->setObjectName(QStringLiteral("btGb12"));
        btGb12->setMinimumSize(QSize(50, 50));
        btGb12->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb12, 1, 2, 1, 1);

        btGb04 = new QPushButton(gridLayoutWidget);
        btGb04->setObjectName(QStringLiteral("btGb04"));
        btGb04->setMinimumSize(QSize(50, 50));
        btGb04->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb04, 0, 4, 1, 1);

        btGb43 = new QPushButton(gridLayoutWidget);
        btGb43->setObjectName(QStringLiteral("btGb43"));
        btGb43->setMinimumSize(QSize(50, 50));
        btGb43->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb43, 4, 3, 1, 1);

        btGb09 = new QPushButton(gridLayoutWidget);
        btGb09->setObjectName(QStringLiteral("btGb09"));
        btGb09->setMinimumSize(QSize(50, 50));
        btGb09->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb09, 0, 9, 1, 1);

        btGb46 = new QPushButton(gridLayoutWidget);
        btGb46->setObjectName(QStringLiteral("btGb46"));
        btGb46->setMinimumSize(QSize(50, 50));
        btGb46->setMaximumSize(QSize(50, 50));
        btGb46->setStyleSheet(QStringLiteral(""));

        glGameBoard->addWidget(btGb46, 4, 6, 1, 1);

        btGb37 = new QPushButton(gridLayoutWidget);
        btGb37->setObjectName(QStringLiteral("btGb37"));
        btGb37->setMinimumSize(QSize(50, 50));
        btGb37->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb37, 3, 7, 1, 1);

        btGb26 = new QPushButton(gridLayoutWidget);
        btGb26->setObjectName(QStringLiteral("btGb26"));
        btGb26->setMinimumSize(QSize(50, 50));
        btGb26->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb26, 2, 6, 1, 1);

        btGb42 = new QPushButton(gridLayoutWidget);
        btGb42->setObjectName(QStringLiteral("btGb42"));
        btGb42->setMinimumSize(QSize(50, 50));
        btGb42->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb42, 4, 2, 1, 1);

        btGb21 = new QPushButton(gridLayoutWidget);
        btGb21->setObjectName(QStringLiteral("btGb21"));
        btGb21->setMinimumSize(QSize(50, 50));
        btGb21->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb21, 2, 1, 1, 1);

        btGb39 = new QPushButton(gridLayoutWidget);
        btGb39->setObjectName(QStringLiteral("btGb39"));
        btGb39->setMinimumSize(QSize(50, 50));
        btGb39->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb39, 3, 9, 1, 1);

        btGb23 = new QPushButton(gridLayoutWidget);
        btGb23->setObjectName(QStringLiteral("btGb23"));
        btGb23->setMinimumSize(QSize(50, 50));
        btGb23->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb23, 2, 3, 1, 1);

        btGb40 = new QPushButton(gridLayoutWidget);
        btGb40->setObjectName(QStringLiteral("btGb40"));
        btGb40->setMinimumSize(QSize(50, 50));
        btGb40->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb40, 4, 0, 1, 1);

        btGb47 = new QPushButton(gridLayoutWidget);
        btGb47->setObjectName(QStringLiteral("btGb47"));
        btGb47->setMinimumSize(QSize(50, 50));
        btGb47->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb47, 4, 7, 1, 1);

        btGb28 = new QPushButton(gridLayoutWidget);
        btGb28->setObjectName(QStringLiteral("btGb28"));
        btGb28->setMinimumSize(QSize(50, 50));
        btGb28->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb28, 2, 8, 1, 1);

        btGb24 = new QPushButton(gridLayoutWidget);
        btGb24->setObjectName(QStringLiteral("btGb24"));
        btGb24->setMinimumSize(QSize(50, 50));
        btGb24->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb24, 2, 4, 1, 1);

        btGb22 = new QPushButton(gridLayoutWidget);
        btGb22->setObjectName(QStringLiteral("btGb22"));
        btGb22->setMinimumSize(QSize(50, 50));
        btGb22->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb22, 2, 2, 1, 1);

        btGb25 = new QPushButton(gridLayoutWidget);
        btGb25->setObjectName(QStringLiteral("btGb25"));
        btGb25->setMinimumSize(QSize(50, 50));
        btGb25->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb25, 2, 5, 1, 1);

        btGb33 = new QPushButton(gridLayoutWidget);
        btGb33->setObjectName(QStringLiteral("btGb33"));
        btGb33->setMinimumSize(QSize(50, 50));
        btGb33->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb33, 3, 3, 1, 1);

        btGb48 = new QPushButton(gridLayoutWidget);
        btGb48->setObjectName(QStringLiteral("btGb48"));
        btGb48->setMinimumSize(QSize(50, 50));
        btGb48->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb48, 4, 8, 1, 1);

        btGb49 = new QPushButton(gridLayoutWidget);
        btGb49->setObjectName(QStringLiteral("btGb49"));
        btGb49->setMinimumSize(QSize(50, 50));
        btGb49->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb49, 4, 9, 1, 1);

        btGb50 = new QPushButton(gridLayoutWidget);
        btGb50->setObjectName(QStringLiteral("btGb50"));
        btGb50->setMinimumSize(QSize(50, 50));
        btGb50->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb50, 5, 0, 1, 1);

        btGb36 = new QPushButton(gridLayoutWidget);
        btGb36->setObjectName(QStringLiteral("btGb36"));
        btGb36->setMinimumSize(QSize(50, 50));
        btGb36->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb36, 3, 6, 1, 1);

        btGb41 = new QPushButton(gridLayoutWidget);
        btGb41->setObjectName(QStringLiteral("btGb41"));
        btGb41->setMinimumSize(QSize(50, 50));
        btGb41->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb41, 4, 1, 1, 1);

        btGb30 = new QPushButton(gridLayoutWidget);
        btGb30->setObjectName(QStringLiteral("btGb30"));
        btGb30->setMinimumSize(QSize(50, 50));
        btGb30->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb30, 3, 0, 1, 1);

        btGb19 = new QPushButton(gridLayoutWidget);
        btGb19->setObjectName(QStringLiteral("btGb19"));
        btGb19->setMinimumSize(QSize(50, 50));
        btGb19->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb19, 1, 9, 1, 1);

        btGb31 = new QPushButton(gridLayoutWidget);
        btGb31->setObjectName(QStringLiteral("btGb31"));
        btGb31->setMinimumSize(QSize(50, 50));
        btGb31->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb31, 3, 1, 1, 1);

        btGb20 = new QPushButton(gridLayoutWidget);
        btGb20->setObjectName(QStringLiteral("btGb20"));
        btGb20->setMinimumSize(QSize(50, 50));
        btGb20->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb20, 2, 0, 1, 1);

        btGb27 = new QPushButton(gridLayoutWidget);
        btGb27->setObjectName(QStringLiteral("btGb27"));
        btGb27->setMinimumSize(QSize(50, 50));
        btGb27->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb27, 2, 7, 1, 1);

        btGb38 = new QPushButton(gridLayoutWidget);
        btGb38->setObjectName(QStringLiteral("btGb38"));
        btGb38->setMinimumSize(QSize(50, 50));
        btGb38->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb38, 3, 8, 1, 1);

        btGb44 = new QPushButton(gridLayoutWidget);
        btGb44->setObjectName(QStringLiteral("btGb44"));
        btGb44->setMinimumSize(QSize(50, 50));
        btGb44->setMaximumSize(QSize(50, 50));
        btGb44->setStyleSheet(QStringLiteral(""));

        glGameBoard->addWidget(btGb44, 4, 4, 1, 1);

        btGb32 = new QPushButton(gridLayoutWidget);
        btGb32->setObjectName(QStringLiteral("btGb32"));
        btGb32->setMinimumSize(QSize(50, 50));
        btGb32->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb32, 3, 2, 1, 1);

        btGb34 = new QPushButton(gridLayoutWidget);
        btGb34->setObjectName(QStringLiteral("btGb34"));
        btGb34->setMinimumSize(QSize(50, 50));
        btGb34->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb34, 3, 4, 1, 1);

        btGb29 = new QPushButton(gridLayoutWidget);
        btGb29->setObjectName(QStringLiteral("btGb29"));
        btGb29->setMinimumSize(QSize(50, 50));
        btGb29->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb29, 2, 9, 1, 1);

        btGb68 = new QPushButton(gridLayoutWidget);
        btGb68->setObjectName(QStringLiteral("btGb68"));
        btGb68->setMinimumSize(QSize(50, 50));
        btGb68->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb68, 6, 8, 1, 1);

        btGb53 = new QPushButton(gridLayoutWidget);
        btGb53->setObjectName(QStringLiteral("btGb53"));
        btGb53->setMinimumSize(QSize(50, 50));
        btGb53->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb53, 5, 3, 1, 1);

        btGb69 = new QPushButton(gridLayoutWidget);
        btGb69->setObjectName(QStringLiteral("btGb69"));
        btGb69->setMinimumSize(QSize(50, 50));
        btGb69->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb69, 6, 9, 1, 1);

        btGb77 = new QPushButton(gridLayoutWidget);
        btGb77->setObjectName(QStringLiteral("btGb77"));
        btGb77->setMinimumSize(QSize(50, 50));
        btGb77->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb77, 7, 7, 1, 1);

        btGb65 = new QPushButton(gridLayoutWidget);
        btGb65->setObjectName(QStringLiteral("btGb65"));
        btGb65->setMinimumSize(QSize(50, 50));
        btGb65->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb65, 6, 5, 1, 1);

        btGb78 = new QPushButton(gridLayoutWidget);
        btGb78->setObjectName(QStringLiteral("btGb78"));
        btGb78->setMinimumSize(QSize(50, 50));
        btGb78->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb78, 7, 8, 1, 1);

        btGb74 = new QPushButton(gridLayoutWidget);
        btGb74->setObjectName(QStringLiteral("btGb74"));
        btGb74->setMinimumSize(QSize(50, 50));
        btGb74->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb74, 7, 4, 1, 1);

        btGb75 = new QPushButton(gridLayoutWidget);
        btGb75->setObjectName(QStringLiteral("btGb75"));
        btGb75->setMinimumSize(QSize(50, 50));
        btGb75->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb75, 7, 5, 1, 1);

        btGb61 = new QPushButton(gridLayoutWidget);
        btGb61->setObjectName(QStringLiteral("btGb61"));
        btGb61->setMinimumSize(QSize(50, 50));
        btGb61->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb61, 6, 1, 1, 1);

        btGb56 = new QPushButton(gridLayoutWidget);
        btGb56->setObjectName(QStringLiteral("btGb56"));
        btGb56->setMinimumSize(QSize(50, 50));
        btGb56->setMaximumSize(QSize(50, 50));
        btGb56->setStyleSheet(QStringLiteral(""));

        glGameBoard->addWidget(btGb56, 5, 6, 1, 1);

        btGb67 = new QPushButton(gridLayoutWidget);
        btGb67->setObjectName(QStringLiteral("btGb67"));
        btGb67->setMinimumSize(QSize(50, 50));
        btGb67->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb67, 6, 7, 1, 1);

        btGb55 = new QPushButton(gridLayoutWidget);
        btGb55->setObjectName(QStringLiteral("btGb55"));
        btGb55->setMinimumSize(QSize(50, 50));
        btGb55->setMaximumSize(QSize(50, 50));
        btGb55->setStyleSheet(QStringLiteral(""));

        glGameBoard->addWidget(btGb55, 5, 5, 1, 1);

        btGb57 = new QPushButton(gridLayoutWidget);
        btGb57->setObjectName(QStringLiteral("btGb57"));
        btGb57->setMinimumSize(QSize(50, 50));
        btGb57->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb57, 5, 7, 1, 1);

        btGb63 = new QPushButton(gridLayoutWidget);
        btGb63->setObjectName(QStringLiteral("btGb63"));
        btGb63->setMinimumSize(QSize(50, 50));
        btGb63->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb63, 6, 3, 1, 1);

        btGb60 = new QPushButton(gridLayoutWidget);
        btGb60->setObjectName(QStringLiteral("btGb60"));
        btGb60->setMinimumSize(QSize(50, 50));
        btGb60->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb60, 6, 0, 1, 1);

        btGb51 = new QPushButton(gridLayoutWidget);
        btGb51->setObjectName(QStringLiteral("btGb51"));
        btGb51->setMinimumSize(QSize(50, 50));
        btGb51->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb51, 5, 1, 1, 1);

        btGb87 = new QPushButton(gridLayoutWidget);
        btGb87->setObjectName(QStringLiteral("btGb87"));
        btGb87->setMinimumSize(QSize(50, 50));
        btGb87->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb87, 8, 7, 1, 1);

        btGb97 = new QPushButton(gridLayoutWidget);
        btGb97->setObjectName(QStringLiteral("btGb97"));
        btGb97->setMinimumSize(QSize(50, 50));
        btGb97->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb97, 9, 7, 1, 1);

        btGb99 = new QPushButton(gridLayoutWidget);
        btGb99->setObjectName(QStringLiteral("btGb99"));
        btGb99->setMinimumSize(QSize(50, 50));
        btGb99->setMaximumSize(QSize(50, 50));
        btGb99->setToolTipDuration(0);

        glGameBoard->addWidget(btGb99, 9, 9, 1, 1);

        btGb93 = new QPushButton(gridLayoutWidget);
        btGb93->setObjectName(QStringLiteral("btGb93"));
        btGb93->setMinimumSize(QSize(50, 50));
        btGb93->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb93, 9, 3, 1, 1);

        btGb84 = new QPushButton(gridLayoutWidget);
        btGb84->setObjectName(QStringLiteral("btGb84"));
        btGb84->setMinimumSize(QSize(50, 50));
        btGb84->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb84, 8, 4, 1, 1);

        btGb96 = new QPushButton(gridLayoutWidget);
        btGb96->setObjectName(QStringLiteral("btGb96"));
        btGb96->setMinimumSize(QSize(50, 50));
        btGb96->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb96, 9, 6, 1, 1);

        btGb88 = new QPushButton(gridLayoutWidget);
        btGb88->setObjectName(QStringLiteral("btGb88"));
        btGb88->setMinimumSize(QSize(50, 50));
        btGb88->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb88, 8, 8, 1, 1);

        btGb83 = new QPushButton(gridLayoutWidget);
        btGb83->setObjectName(QStringLiteral("btGb83"));
        btGb83->setMinimumSize(QSize(50, 50));
        btGb83->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb83, 8, 3, 1, 1);

        btGb98 = new QPushButton(gridLayoutWidget);
        btGb98->setObjectName(QStringLiteral("btGb98"));
        btGb98->setMinimumSize(QSize(50, 50));
        btGb98->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb98, 9, 8, 1, 1);

        btGb95 = new QPushButton(gridLayoutWidget);
        btGb95->setObjectName(QStringLiteral("btGb95"));
        btGb95->setMinimumSize(QSize(50, 50));
        btGb95->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb95, 9, 5, 1, 1);

        btGb85 = new QPushButton(gridLayoutWidget);
        btGb85->setObjectName(QStringLiteral("btGb85"));
        btGb85->setMinimumSize(QSize(50, 50));
        btGb85->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb85, 8, 5, 1, 1);

        btGb86 = new QPushButton(gridLayoutWidget);
        btGb86->setObjectName(QStringLiteral("btGb86"));
        btGb86->setMinimumSize(QSize(50, 50));
        btGb86->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb86, 8, 6, 1, 1);

        btGb89 = new QPushButton(gridLayoutWidget);
        btGb89->setObjectName(QStringLiteral("btGb89"));
        btGb89->setMinimumSize(QSize(50, 50));
        btGb89->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb89, 8, 9, 1, 1);

        btGb94 = new QPushButton(gridLayoutWidget);
        btGb94->setObjectName(QStringLiteral("btGb94"));
        btGb94->setMinimumSize(QSize(50, 50));
        btGb94->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb94, 9, 4, 1, 1);

        btGb91 = new QPushButton(gridLayoutWidget);
        btGb91->setObjectName(QStringLiteral("btGb91"));
        btGb91->setMinimumSize(QSize(50, 50));
        btGb91->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb91, 9, 1, 1, 1);

        btGb90 = new QPushButton(gridLayoutWidget);
        btGb90->setObjectName(QStringLiteral("btGb90"));
        btGb90->setMinimumSize(QSize(50, 50));
        btGb90->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb90, 9, 0, 1, 1);

        btGb92 = new QPushButton(gridLayoutWidget);
        btGb92->setObjectName(QStringLiteral("btGb92"));
        btGb92->setMinimumSize(QSize(50, 50));
        btGb92->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb92, 9, 2, 1, 1);

        btGb35 = new QPushButton(gridLayoutWidget);
        btGb35->setObjectName(QStringLiteral("btGb35"));
        btGb35->setMinimumSize(QSize(50, 50));
        btGb35->setMaximumSize(QSize(50, 50));

        glGameBoard->addWidget(btGb35, 3, 5, 1, 1);

        btGb00 = new QPushButton(gridLayoutWidget);
        btGb00->setObjectName(QStringLiteral("btGb00"));
        btGb00->setMinimumSize(QSize(50, 50));
        btGb00->setMaximumSize(QSize(50, 50));
        btGb00->setSizeIncrement(QSize(0, 0));

        glGameBoard->addWidget(btGb00, 0, 0, 1, 1);

        btGb45 = new QPushButton(gridLayoutWidget);
        btGb45->setObjectName(QStringLiteral("btGb45"));
        btGb45->setMinimumSize(QSize(50, 50));
        btGb45->setMaximumSize(QSize(50, 50));
        btGb45->setStyleSheet(QStringLiteral(""));

        glGameBoard->addWidget(btGb45, 4, 5, 1, 1);

        fmRaccoglitore = new QFrame(centralWidget);
        fmRaccoglitore->setObjectName(QStringLiteral("fmRaccoglitore"));
        fmRaccoglitore->setGeometry(QRect(640, 530, 451, 171));
        fmRaccoglitore->setFrameShape(QFrame::StyledPanel);
        fmRaccoglitore->setFrameShadow(QFrame::Raised);
        lbRc1 = new QLabel(fmRaccoglitore);
        lbRc1->setObjectName(QStringLiteral("lbRc1"));
        lbRc1->setGeometry(QRect(20, 10, 121, 31));
        QFont font;
        font.setPointSize(12);
        lbRc1->setFont(font);
        btMescola = new QPushButton(fmRaccoglitore);
        btMescola->setObjectName(QStringLiteral("btMescola"));
        btMescola->setGeometry(QRect(160, 10, 75, 23));
        btRichiamaLettere = new QPushButton(fmRaccoglitore);
        btRichiamaLettere->setObjectName(QStringLiteral("btRichiamaLettere"));
        btRichiamaLettere->setGeometry(QRect(240, 10, 101, 23));
        btCambiaLettere = new QPushButton(fmRaccoglitore);
        btCambiaLettere->setObjectName(QStringLiteral("btCambiaLettere"));
        btCambiaLettere->setGeometry(QRect(354, 10, 91, 23));
        horizontalLayoutWidget = new QWidget(fmRaccoglitore);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 90, 431, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btRc0 = new QPushButton(horizontalLayoutWidget);
        btRc0->setObjectName(QStringLiteral("btRc0"));
        btRc0->setMinimumSize(QSize(50, 50));
        btRc0->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc0);

        btRc1 = new QPushButton(horizontalLayoutWidget);
        btRc1->setObjectName(QStringLiteral("btRc1"));
        btRc1->setMinimumSize(QSize(50, 50));
        btRc1->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc1);

        btRc2 = new QPushButton(horizontalLayoutWidget);
        btRc2->setObjectName(QStringLiteral("btRc2"));
        btRc2->setMinimumSize(QSize(50, 50));
        btRc2->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc2);

        btRc3 = new QPushButton(horizontalLayoutWidget);
        btRc3->setObjectName(QStringLiteral("btRc3"));
        btRc3->setMinimumSize(QSize(50, 50));
        btRc3->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc3);

        btRc4 = new QPushButton(horizontalLayoutWidget);
        btRc4->setObjectName(QStringLiteral("btRc4"));
        btRc4->setMinimumSize(QSize(50, 50));
        btRc4->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc4);

        btRc5 = new QPushButton(horizontalLayoutWidget);
        btRc5->setObjectName(QStringLiteral("btRc5"));
        btRc5->setMinimumSize(QSize(50, 50));
        btRc5->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc5);

        btRc6 = new QPushButton(horizontalLayoutWidget);
        btRc6->setObjectName(QStringLiteral("btRc6"));
        btRc6->setMinimumSize(QSize(50, 50));
        btRc6->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(btRc6);

        lbRc2 = new QLabel(fmRaccoglitore);
        lbRc2->setObjectName(QStringLiteral("lbRc2"));
        lbRc2->setGeometry(QRect(20, 50, 371, 16));
        lbRc2->setFont(font);
        fmInfoBox = new QFrame(centralWidget);
        fmInfoBox->setObjectName(QStringLiteral("fmInfoBox"));
        fmInfoBox->setGeometry(QRect(10, 50, 321, 271));
        fmInfoBox->setFrameShape(QFrame::StyledPanel);
        fmInfoBox->setFrameShadow(QFrame::Raised);
        lbNomeTurno1 = new QLabel(fmInfoBox);
        lbNomeTurno1->setObjectName(QStringLiteral("lbNomeTurno1"));
        lbNomeTurno1->setGeometry(QRect(10, 20, 101, 16));
        lbNomeTurno1->setFont(font);
        lbNomeTurno2 = new QLabel(fmInfoBox);
        lbNomeTurno2->setObjectName(QStringLiteral("lbNomeTurno2"));
        lbNomeTurno2->setGeometry(QRect(120, 20, 101, 21));
        lbNomeTurno2->setFont(font);
        btSuggerimento = new QPushButton(fmInfoBox);
        btSuggerimento->setObjectName(QStringLiteral("btSuggerimento"));
        btSuggerimento->setGeometry(QRect(130, 160, 81, 23));
        btPassaTurno = new QPushButton(fmInfoBox);
        btPassaTurno->setObjectName(QStringLiteral("btPassaTurno"));
        btPassaTurno->setGeometry(QRect(10, 160, 81, 23));
        btFine = new QPushButton(fmInfoBox);
        btFine->setObjectName(QStringLiteral("btFine"));
        btFine->setGeometry(QRect(10, 210, 75, 23));
        btParolaGiocata = new QPushButton(fmInfoBox);
        btParolaGiocata->setObjectName(QStringLiteral("btParolaGiocata"));
        btParolaGiocata->setGeometry(QRect(130, 210, 75, 23));
        lbPunteggio1 = new QLabel(fmInfoBox);
        lbPunteggio1->setObjectName(QStringLiteral("lbPunteggio1"));
        lbPunteggio1->setGeometry(QRect(20, 80, 101, 16));
        lbPunteggio1->setFont(font);
        lbPunteggio2 = new QLabel(fmInfoBox);
        lbPunteggio2->setObjectName(QStringLiteral("lbPunteggio2"));
        lbPunteggio2->setGeometry(QRect(130, 80, 141, 16));
        lbPunteggio2->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1366, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Upwords", nullptr));
        btGb52->setText(QString());
        btGb62->setText(QString());
        btGb80->setText(QString());
        btGb76->setText(QString());
        btGb71->setText(QString());
        btGb79->setText(QString());
        btGb81->setText(QString());
        btGb72->setText(QString());
        btGb66->setText(QString());
        btGb64->setText(QString());
        btGb70->setText(QString());
        btGb73->setText(QString());
        btGb82->setText(QString());
        btGb58->setText(QString());
        btGb54->setText(QString());
        btGb59->setText(QString());
        btGb07->setText(QString());
        btGb03->setText(QString());
        btGb10->setText(QString());
        btGb13->setText(QString());
        btGb05->setText(QString());
        btGb11->setText(QString());
        btGb14->setText(QString());
        btGb18->setText(QString());
        btGb16->setText(QString());
        btGb17->setText(QString());
        btGb15->setText(QString());
        btGb06->setText(QString());
        btGb08->setText(QString());
        btGb01->setText(QString());
        btGb02->setText(QString());
        btGb12->setText(QString());
        btGb04->setText(QString());
        btGb43->setText(QString());
        btGb09->setText(QString());
        btGb46->setText(QString());
        btGb37->setText(QString());
        btGb26->setText(QString());
        btGb42->setText(QString());
        btGb21->setText(QString());
        btGb39->setText(QString());
        btGb23->setText(QString());
        btGb40->setText(QString());
        btGb47->setText(QString());
        btGb28->setText(QString());
        btGb24->setText(QString());
        btGb22->setText(QString());
        btGb25->setText(QString());
        btGb33->setText(QString());
        btGb48->setText(QString());
        btGb49->setText(QString());
        btGb50->setText(QString());
        btGb36->setText(QString());
        btGb41->setText(QString());
        btGb30->setText(QString());
        btGb19->setText(QString());
        btGb31->setText(QString());
        btGb20->setText(QString());
        btGb27->setText(QString());
        btGb38->setText(QString());
        btGb44->setText(QString());
        btGb32->setText(QString());
        btGb34->setText(QString());
        btGb29->setText(QString());
        btGb68->setText(QString());
        btGb53->setText(QString());
        btGb69->setText(QString());
        btGb77->setText(QString());
        btGb65->setText(QString());
        btGb78->setText(QString());
        btGb74->setText(QString());
        btGb75->setText(QString());
        btGb61->setText(QString());
        btGb56->setText(QString());
        btGb67->setText(QString());
        btGb55->setText(QString());
        btGb57->setText(QString());
        btGb63->setText(QString());
        btGb60->setText(QString());
        btGb51->setText(QString());
        btGb87->setText(QString());
        btGb97->setText(QString());
        btGb99->setText(QString());
        btGb93->setText(QString());
        btGb84->setText(QString());
        btGb96->setText(QString());
        btGb88->setText(QString());
        btGb83->setText(QString());
        btGb98->setText(QString());
        btGb95->setText(QString());
        btGb85->setText(QString());
        btGb86->setText(QString());
        btGb89->setText(QString());
        btGb94->setText(QString());
        btGb91->setText(QString());
        btGb90->setText(QString());
        btGb92->setText(QString());
#ifndef QT_NO_TOOLTIP
        btGb35->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        btGb35->setText(QString());
        btGb00->setText(QString());
        btGb45->setText(QString());
        lbRc1->setText(QApplication::translate("MainWindow", "RACCOGLITORE", nullptr));
        btMescola->setText(QApplication::translate("MainWindow", "Mescola", nullptr));
        btRichiamaLettere->setText(QApplication::translate("MainWindow", "Richiama Lettere", nullptr));
        btCambiaLettere->setText(QApplication::translate("MainWindow", "Cambia Lettere", nullptr));
        btRc0->setText(QString());
        btRc1->setText(QString());
        btRc2->setText(QString());
        btRc3->setText(QString());
        btRc4->setText(QString());
        btRc5->setText(QString());
        btRc6->setText(QString());
        lbRc2->setText(QApplication::translate("MainWindow", "Premere sulla lettera da cambiare:", nullptr));
        lbNomeTurno1->setText(QApplication::translate("MainWindow", "E' il turno di :", nullptr));
        lbNomeTurno2->setText(QApplication::translate("MainWindow", "NOME", nullptr));
        btSuggerimento->setText(QApplication::translate("MainWindow", "Suggerimento", nullptr));
        btPassaTurno->setText(QApplication::translate("MainWindow", "Passa Il Turno", nullptr));
        btFine->setText(QApplication::translate("MainWindow", "Fine Partita", nullptr));
        btParolaGiocata->setText(QApplication::translate("MainWindow", "Gioca Parola", nullptr));
        lbPunteggio1->setText(QApplication::translate("MainWindow", "PUNTEGGIO:", nullptr));
        lbPunteggio2->setText(QApplication::translate("MainWindow", "PUNTEGGIO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
