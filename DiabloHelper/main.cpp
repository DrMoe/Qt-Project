//Main
//Test
#include <QtGui/QApplication>
#include "diablomain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    diablomain w;    
    w.show();
    
    return a.exec();
}
