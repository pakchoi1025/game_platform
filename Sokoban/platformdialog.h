#ifndef PLATFORMDIALOG_H
#define PLATFORMDIALOG_H

#include <QDialog>

namespace Ui {
class PlatFormDialog;
}

class PlatFormDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlatFormDialog(QWidget *parent = nullptr);
    ~PlatFormDialog();

private:
    Ui::PlatFormDialog *ui;
};

#endif // PLATFORMDIALOG_H
