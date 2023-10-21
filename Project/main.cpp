#include "mainwindow.h"
#include <QPalette>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;





        window.setWindowTitle("Background Example");

        // Создаем палитру и устанавливаем цвет фона
        QPalette palette;
        palette.setColor(QPalette:: Window, Qt::darkGray );

        // Устанавливаем палитру для виджета
        window.setPalette(palette);

        window.show();

        return a.exec();

}
