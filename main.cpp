#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include "fce.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setApplicationPath(a.applicationDirPath());

    return a.exec();
}
