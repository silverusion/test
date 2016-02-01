#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QtGui>
#include <QPushButton>
#include <QFrame>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool c;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsItem *item;
    QGraphicsScene *scene;
};

#endif // MAINWINDOW_H
