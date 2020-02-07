#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QApplication>
#include <QPushButton>
#include <QSlider>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QPushButton *rulepush;
    QPushButton *hspush;
    QPushButton *playpush;
    QSlider * VolumeSlider = new QSlider (Qt::Horizontal);

    VolumeSlider->setRange(0,100);
    rulepush = new QPushButton("Rules");
    hspush = new QPushButton("High Score");
    playpush = new QPushButton("Play");

    QVBoxLayout *layout = new QVBoxLayout;

    QWidget *Upper = new QWidget;
    QHBoxLayout *layout1 = new QHBoxLayout;
    layout1->addWidget(hspush);
    layout1->addWidget(rulepush);
    Upper->setLayout(layout1);

    QWidget *Center = new QWidget;
    Center->setStyleSheet("background-color : yellow");
    playpush->setParent(Center);

    layout->addWidget(Upper);
    layout->addWidget(Center);
    layout->addWidget(VolumeSlider);

    QWidget* outer = new QWidget;
    outer->setLayout(layout);
    w.setCentralWidget(outer);

    w.setWindowTitle("PIC Golf");
    w.show();
    return a.exec();
}
