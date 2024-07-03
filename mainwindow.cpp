#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <windows.h>
#include <QTimer>
#include <QPixmap>
#include "aboutme.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    aboutMe = (nullptr);
    QPixmap pic (":/resource/img/file.png");
    setWindowIcon(QIcon(":/resource/img/file.ico"));

    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pic.scaled(w,h,Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->label_pic->setAlignment(Qt::AlignCenter);
    originalButtonStyleSheet = ui->pushButton->styleSheet();
    testString = "Amogh Raina";
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateText);
    timer->start(200);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::updateText(){
    QTimer::singleShot(1000, this, [this]() {
        if (currentIndex < testString.size()) {
            ui->lineEdit_name->setText(ui->lineEdit_name->text() + testString[currentIndex]);
            currentIndex++;
        } else {
            timer->stop();
        }
    });

}

void MainWindow::on_pushButton_clicked()
{

    val= "Validating";
    val2="success";
    timer2 = new QTimer;

    connect(timer2, &QTimer::timeout, this, &MainWindow::showValidatingText);
    timer2->start(100);
    ui->pushButton->setText("");

}

void MainWindow::showValidatingText()
{

    if(currentIndex2 < val.size()){
        ui->pushButton->setText(ui->pushButton->text()+val[currentIndex2]);
        currentIndex2 ++;
    }
    else{
        timer2->stop();
        currentIndex2=0;
        QTimer::singleShot(2000, this, &MainWindow::checkCredentials); // Wait for 2000 ms (2 seconds) before checking credentials

    }




}
void MainWindow::checkCredentials()
{
    if (ui->lineEdit_username->text() == "amoghraina" && ui->lineEdit_password->text() == "1.618") {
        ui->pushButton->setStyleSheet("color: green;border-radius: 10px;");

        ui->pushButton->setText("Success");
        QTimer::singleShot(2000,this,[this](){
            hide();
            aboutMe = new aboutme(this);
            aboutMe->show();

        });
    } else {
        ui->pushButton->setStyleSheet("color: red;border-radius: 10px;"); // Set text color to red
        ui->pushButton->setText("Failed");
        QTimer::singleShot(2000, this, [this]() {
            ui->pushButton->setStyleSheet(originalButtonStyleSheet);
            ui->pushButton->setText("Login");
        });

    }
}

void MainWindow::on_pushButton_2_clicked()
{

    if(!aboutMe){
        aboutMe = new aboutme(this);
        aboutMe->move(x() - aboutMe->width(), y());
        connect(aboutMe, &QDialog::finished, this, [this]() {
            aboutMe->deleteLater();
            aboutMe = nullptr;
        });
    aboutMe->show();

    }
    else{

    }
}

