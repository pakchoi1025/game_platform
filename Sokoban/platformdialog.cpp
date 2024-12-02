#include "platformdialog.h"
#include "ui_platformdialog.h"

PlatFormDialog::PlatFormDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlatFormDialog)
{
    ui->setupUi(this);
}

PlatFormDialog::~PlatFormDialog()
{
    delete ui;
}
