#include "mainwindow.h"
#include "components/bootsplash.h"

#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto b = new AIBaker::BootSplash("/home/nomodeset/splash.png");
    auto w = new MainWindow;
    for (long long int i = 0; i < 4000000000; i++);
    w->show();
    b->finish(w);
    delete b;
    return a.exec();
}
