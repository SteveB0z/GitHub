#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    nomi.push_back("A");
    nomi.push_back("B");
    nomi.push_back("C");
    nomi.push_back("D");
    nomi.push_back("E");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setText("\0");
    ui->pushButton_2->setText(nomi[i]);
    if(i == 4)
        i=0;
    else
        ++i;
}
