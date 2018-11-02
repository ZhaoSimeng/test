#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setFont(QFont("Times", 20, QFont::Bold));
}

MainWindow::~MainWindow()
{
    delete ui;
}
