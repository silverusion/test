#include "viewclass.h"

ViewClass::ViewClass(QWidget *parent) : QGraphicsView(parent)
{
}

void ViewClass::wheelEvent(QWheelEvent *event)
{
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    double scaleFactor = 1.1;


    else
    {
        scale(1/scaleFactor, 1/scaleFactor);
    }
}
