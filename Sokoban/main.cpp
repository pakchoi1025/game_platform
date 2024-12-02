#include "mainwindow.h"
#include "platformdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); // 启用高DPI缩放
    QApplication a(argc, argv);

    PlatFormDialog w;

    w.show();

    return a.exec();
}
