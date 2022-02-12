#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "camviewer.h"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    // переменные для инвертирования изображения и изменения окна фильтров
   char byte = 0;
   unsigned int sc = 1;
   // переменные для ползунков поиска объекта определенного цвета
   unsigned int var1 = 0,var2 = 0,var3 = 0,var4 = 179,var5 = 255,var6 = 255;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
     bool isCameraOn;

private slots: // изменение ползунков и нажатие кнопки
    void on_pushButton_clicked();
    void updateView(void);
    void slider(int);
    void slide1(int);
    void slide2(int);
    void slide3(int);
    void slide4(int);
    void slide5(int);
    void slide6(int);
    void scale(int);

private:
    Ui::MainWindow *ui; // указатель на ui форму
    QGraphicsScene scene; // для вывода изображения
    cv::VideoCapture video; // переменна захвата изображения
    cv::Mat frame; // // изображения в матричной форме
};
#endif // MAINWINDOW_H
