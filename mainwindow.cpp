#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //打印日志到文件中
    qDebug("This is a debug message");
    qWarning("This is a warning message");
    qCritical("This is a critical message");
}

MainWindow::~MainWindow()
{
    delete ui;
}

