#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(on_btnCount_clicked) );
}

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString("Painiketta Count painettu %1 kertaa").arg(counter);
    ui->labelInfo->setText(s);
    QString c = QString("%1").arg(counter);
    ui->txtResult->setText(c);
}


void MainWindow::on_btnReset_clicked()
{
    counter=0;
    QString a = QString("Painiketta Count painettu 0 kertaa").arg(counter);
    ui->labelInfo->setText(a);
    QString b = QString("0").arg(counter);
    ui->txtResult->setText(b);
}

