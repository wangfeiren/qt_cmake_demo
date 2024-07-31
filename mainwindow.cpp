#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int x = 5;

    int y = x + 1;

    qDebug() << y;
}

MainWindow::~MainWindow()
{
    delete ui;
}
