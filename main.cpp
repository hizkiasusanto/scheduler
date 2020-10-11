#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>

QSqlDatabase* dbConnectionPtr;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;
    window.show();
    return app.exec();
}
