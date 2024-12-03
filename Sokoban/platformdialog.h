#ifndef PLATFORMDIALOG_H
#define PLATFORMDIALOG_H

#include <QDialog>
#include <QKeyEvent>

#include "widgetbase.h"

namespace Ui {
class PlatFormDialog;
}

class PlatFormDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlatFormDialog(QWidget *parent = nullptr);
    ~PlatFormDialog();

public slots:
    void keyPressEvent(QKeyEvent *event);

private:
    void stepAdd();

    Ui::PlatFormDialog *ui;
    int m_step;//当前第几步 1-4 循环
    int m_step_len;//步长
    WidgetBase* m_pole_widget;

};

#endif // PLATFORMDIALOG_H
