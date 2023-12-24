#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/types_c.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    cap = cv::VideoCapture(0);
    cap.open(0);
    if(!cap.isOpened()){
        QMessageBox msgBox(this);
        msgBox.setText(tr("camera is not opened"));
        msgBox.setWindowTitle(tr("error"));
        msgBox.setStandardButtons(QMessageBox::Yes);
        msgBox.setDefaultButton(QMessageBox::Yes);
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.exec();
        exit(0);
    }

    cap.set(cv::CAP_PROP_FRAME_WIDTH, 640);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, 480);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateWindow()));

    timer->start(20);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MinWindow::updateWindow(){
    cv::VideoCapture cap;
    cv::Mat frame, dst;
    cap >> frame;
    cv::cvtColor(frame, dst, cv::COLOR_BGR2RGB);

    qtImage = QImage((const unsigned char*) (dst.data), dst.cols, dst.rows, QImage::Format_RGB888);
    ui->label->setPixmap(QPixmap::fromImage(qtImage));
}
