#ifndef VIEWCLASS_H
#define VIEWCLASS_H

#include <QGraphicsView>
#include <QtWidgets>
#include <QWidget>


class ViewClass : public QGraphicsView
{
public:
    ViewClass(QWidget* parent = 0);
protected:
    virtual void wheelEvent(QWheelEvent *event);
};

#endif // VIEWCLASS_H
