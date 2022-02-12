#include "camviewer.h"

void CamViewer::setImage(QImage im)
{
    //обновление экрана
    image = im;
    this->scene()->update();

}

void CamViewer::paintEvent(QPaintEvent* event)
{
     QPainter painter(viewport());
     // отрисовка изображения
     painter.drawImage(QRect(0,0,viewport()->width(),viewport()->height()), image, QRect(0,0, image.width(), image.height()) );
     QGraphicsView::paintEvent(event);
}
