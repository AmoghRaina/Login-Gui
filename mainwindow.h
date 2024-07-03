#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "aboutme.h"
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

private slots:
    void updateText();
    void on_pushButton_clicked();
    void showValidatingText();
    void checkCredentials();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QString testString;
    QTimer *timer2;
    QString val;
    QString val2;
    QString originalButtonStyleSheet;

    int currentIndex=0;
    int currentIndex2=0;

    QTimer *timer;
    aboutme *aboutMe;

};
#endif // MAINWINDOW_H
