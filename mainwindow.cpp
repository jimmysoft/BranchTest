#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int jimmy = 1;

    int gitTest = 1;

}

MainWindow::~MainWindow()
{
    delete ui;
}
