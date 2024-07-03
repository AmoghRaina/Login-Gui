#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Login");
    w.setFixedSize(345, 475); // Width: 800, Height: 600

    w.show();
    return a.exec();
}
