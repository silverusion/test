#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString string;
    string = ("1234");
    QFile file("image.ini");
    file.write((char*)string,sizeof(string));
}



void MainWindow::on_pushButton_clicked()
{

//    QImage image("D:/QtProj/1.jpg");
//    item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
//    scene = new QGraphicsScene(this);
//    ui->ViewImage->setScene(scene);
//    scene->addItem(item);
}
