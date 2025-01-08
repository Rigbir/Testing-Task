#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    serial->setPortName("/dev/cu.usbserial-110");
    serial->setBaudRate(QSerialPort::Baud9600);

    if (serial->open(QIODevice::WriteOnly)){
        qDebug() << "Serial port opened.";
    } else {
        qDebug() << "Failed to open serial port.";
    }

    connect(ui->OffButton, &QPushButton::clicked, this, &MainWindow::OffButton);
    connect(ui->OnButton, &QPushButton::clicked, this, &MainWindow::OnButton);

    std::vector<QCheckBox*> checkBox = {
        ui->checkFirst,
        ui->checkSecond,
        ui->checkThird,
        ui->checkFourth,
        ui->checkFifth,
        ui->checkAll
    };

    for (auto check : checkBox){
        connect(check, &QCheckBox::checkStateChanged, this, &MainWindow::getDiodNumber);
    }

    connect(ui->comboBlink, &QComboBox::currentIndexChanged, this, &MainWindow::setBlinkFrequency);
    connect(ui->comboGlow, &QComboBox::currentIndexChanged, this, &MainWindow::setGlowModes);
    ui->brightnessScroll->hide();
    ui->brightnessScroll->setRange(0, 50);
}

void MainWindow::OffButton(){
    std::vector<QCheckBox*> checkBox = {
        ui->checkFirst,
        ui->checkSecond,
        ui->checkThird,
        ui->checkFourth,
        ui->checkFifth,
        ui->checkAll
    };

    for (auto check : checkBox){
        check->setAutoExclusive(false);
        check->setChecked(false);
        check->setAutoExclusive(true);
    }
    serial->write("0");
}

void MainWindow::OnButton(){
    serial->write("1");
}

void MainWindow::getDiodNumber(){
    QCheckBox* senderCheckBox = qobject_cast<QCheckBox*>(sender());
    if (senderCheckBox) {
        QString nowState = senderCheckBox->text();

        std::unordered_map<QString, char> u = {
           {"First", '3'},
           {"Second", '5'},
           {"Third", '6'},
           {"Fourth", '9'},
           {"Fifth", 'T'},
           {"All", 'G'},
        };

        bool isChecked = senderCheckBox->isChecked();

        char state = isChecked ? u[nowState] : '-';
        qDebug() << state;
        serial->write(&state, 1);
    }
}

void MainWindow::setBlinkFrequency(){
    QString nowState = ui->comboBlink->currentText();

    std::unordered_map<QString, char> u = {
       {"Off", 'O'},
       {"Fast", 'F'},
       {"Average", 'A'},
       {"Slow", 'S'},
    };
    qDebug() << nowState;

    char state = u[nowState];
    serial->write(&state, 1);
}

void MainWindow::setGlowModes(){
    QString nowState = ui->comboGlow->currentText();

    std::unordered_map<QString, char> u = {
        {"Off", 'O'},
        {"Constant", 'C'},
        {"Variable", 'V'},
    };
    qDebug() << nowState;

    char state = u[nowState];
    if (state == 'V'){
        ui->brightnessScroll->show();
        disconnect(ui->brightnessScroll, &QSlider::valueChanged, this, &MainWindow::brightnessSlider);
        connect(ui->brightnessScroll, &QSlider::valueChanged, this, &MainWindow::brightnessSlider);
    }
    else {
        ui->brightnessScroll->hide();
    }
    serial->write(&state, 1);
}

void MainWindow::brightnessSlider(int value){
    qDebug() << "Brightness value: " << value;

    static int lastValue = -1;

    if (value != lastValue) {
        lastValue = value;
        char brightness = static_cast<char>(value);
        QByteArray data;
        data.append(brightness);
        serial->write(data);
    }
}

MainWindow::~MainWindow()
{
    if (serial->isOpen()){
        serial->close();
    }
    delete ui;
}
