#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile file;                     // Создание файла

    file.setFileName("style.css");  // Задание имени файла

    file.open(QFile::ReadOnly);     // Открытие

    QString str= file.readAll();    // Считывание файла в строку

    qApp->setStyleSheet(str);       // Применение стилей к приложению
    MainWindow w;
    w.show();

    return a.exec();
}
