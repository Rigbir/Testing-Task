#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void OnButton();
    void OffButton();
    void getDiodNumber();
    void setBlinkFrequency();
    void setGlowModes();
    void brightnessSlider(int value);

private:
    QSerialPort* serial = new QSerialPort(this);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
