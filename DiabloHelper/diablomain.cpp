#include "diablomain.h"
#include "ui_diablomain.h"

diablomain::diablomain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::diablomain)
{
    ui->setupUi(this);
}

diablomain::~diablomain()
{
    delete ui;
}
