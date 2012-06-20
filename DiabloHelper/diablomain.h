#ifndef DIABLOMAIN_H
#define DIABLOMAIN_H

#include <QMainWindow>

namespace Ui {
class diablomain;
}

class diablomain : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit diablomain(QWidget *parent = 0);
    ~diablomain();
    
private:
    Ui::diablomain *ui;
};

#endif // DIABLOMAIN_H
