#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>


#define CAM_ID 0
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer* timer = new QTimer(this);

    // соединение события таймера с обновлением изображения
    connect(timer, SIGNAL(timeout()), this,  SLOT(updateView()));
    timer->start(30); // каждые 30мс

    ui->camViewer->setScene(&scene);
}

MainWindow::~MainWindow()
{
     //деструктор ui и отключение видеофиксации
    delete ui;
    if(video.isOpened())
    {
         video.release();
    }
}


// изменение значения переменных от перемещения ползунка
void MainWindow::slider(int value){
    byte = value;
}
void MainWindow::scale(int value){
    sc = value;
}
void MainWindow::slide1(int value){
    var1 = value;
}
void MainWindow::slide2(int value){
    var2 = value;
}
void MainWindow::slide3(int value){
    var3 = value;
}
void MainWindow::slide4(int value){
    var4 = value;
}
void MainWindow::slide5(int value){
    var5 = value;
}
void MainWindow::slide6(int value){
    var6 = value;
}
void MainWindow::on_pushButton_clicked() // изменение поваедения программы в зависимости от кнопки
{
    if(video.isOpened())
    {
         video.release();
         ui->pushButton->setText("Start");

    }
    else
    {
        video.open(CAM_ID);
        ui->pushButton->setText("Stop");


    }
}




void MainWindow::updateView()
{
    //скрытие окна, чтобы не загружать вывод изображения во время вычислений
    ui->camViewer->hide();
    // если не считываем изображение - выходим
    if(!video.isOpened()) return;
    //ждем получения изображения
    while(1)
    {
        video >> frame;
        if(!frame.empty()) break;
    }
    //если не получилось получить изображение
    if(frame.empty()) return;

    //инверсия изображения
    //ЛР9
    for(int x = 0; x < frame.cols/(sc);x++){
        for(int  y = 0;y<frame.rows/(sc);y++){
          *(frame.data + x * frame.elemSize() + y * frame.step) = 255 -byte -*(frame.data + x * frame.elemSize() + y * frame.step);
           *(frame.data + x * frame.elemSize() + y * frame.step+1) = 255-byte-*(frame.data + x * frame.elemSize() + y * frame.step+1);
            *(frame.data + x * frame.elemSize() + y * frame.step+2) = 255-byte-*(frame.data + x * frame.elemSize() + y * frame.step+2);
        }
    }
    //ЛР10
            //временный объект изображения
            cv::Mat lines;
            //Поиск определенного цвета
            cv::inRange(frame, cv::Scalar(var1, var2, var3), cv::Scalar(var4, var5, var6), lines);

            std::vector<cv::Vec4i> linesP; // хранение вчисленных линий
            HoughLinesP(lines, linesP, 1, CV_PI/180, 50, 50, 10 ); // определение линий
            int xl = 0, xh =  0, yl  = 0, yh  = 0;
            if(!linesP.empty()){ // если есть линии
            xl = (linesP[0])[0];
            xh =  (linesP[0])[2];
            yl  = (linesP[0])[1];
            yh  = (linesP[0])[3];
            }



            for( size_t i = 0; i < linesP.size(); i++ )
            {
                cv::Vec4i l = linesP[i];
                //определение крайних еоординат точек
                if((xl>l[0])){
                    xl = l[0];
                }
                if((xl>l[2])){
                    xl = l[2];
                }
                if((xh<l[0])){
                    xh = l[0];
                }
                if((xh<l[2])){
                    xh = l[2];
                }


                if((yl>l[1])){
                    yl = l[1];
                }
                if((yl>l[3])){
                    yl = l[3];
                }
                if((yh<l[1])){
                    yh = l[1];
                }
                if((yh<l[3])){
                    yh = l[3];
                }


            }
            // объект в прямоугольника
            cv::rectangle(frame, cv::Point(xl, yl), cv::Point(xh, yh), cv::Scalar(0,0,255), 3, cv::LINE_AA);
    //отправляем вычисленное изображение для отрисовки
    ui->camViewer->setImage(QImage((const unsigned char*)(frame.data), frame.cols,frame.rows,QImage::Format_BGR888));
    //открываем изображение
    ui->camViewer->show();

}


