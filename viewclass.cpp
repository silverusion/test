#include "viewclass.h"

ViewClass::ViewClass(QWidget *parent) : QGraphicsView(parent)
{
}

void ViewClass::wheelEvent(QWheelEvent *event)
{
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    double scaleFactor = 1.1;

    if(event->delta() > 0)
    {
        scale(scaleFactor, scaleFactor);
    }
    else
    {
        scale(1/scaleFactor, 1/scaleFactor);
    }
}