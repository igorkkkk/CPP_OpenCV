#ifndef CAMVIEWER_H
#define CAMVIEWER_H

#include <QGraphicsView>

// виджет, который позволяет выводить изображение
class CamViewer : public QGraphicsView
{

public :
    CamViewer(QWidget* centralWidget) : QGraphicsView(centralWidget) {}
    CamViewer(QGraphicsScene * scene, QWidget * parent = 0) : QGraphicsView(scene, parent){}
    ~CamViewer() {}
    //установка изображения
    void setImage(QImage im);

protected :
    void paintEvent(QPaintEvent* paintEventInfo);

private :
    //объект картинка
    QImage image;
};

#endif // CAMVIEWER_H
