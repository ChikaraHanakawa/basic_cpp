#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/alphamat.hpp>
#include <QMutex>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

private slots:
    void updateWindow();

private:
    cv::Mat frame, dst, color_frame;
    cv::VideoCapture cap;
    QTimer *timer;
    QImage qtImage;
};
#endif // MAINWINDOW_H
