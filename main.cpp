#include <QApplication>
#include <qapplication.h>
#include "mainwindow.h"
#include <X11/Xlib.h>
#include <assert.h>


int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow win;
    win.show();
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
