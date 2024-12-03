#include "platformdialog.h"
#include "ui_platformdialog.h"

PlatFormDialog::PlatFormDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlatFormDialog)
{
    ui->setupUi(this);
    m_pole_widget = new WidgetBase(ui->wdg_game);
    m_pole_widget->Init(":/res/role/001-Fighter01.png",50,50);
    m_pole_widget->move(250,300);
    m_pole_widget->show();
    m_step = 1;
    m_step_len = 5;
}

void PlatFormDialog::keyPressEvent(QKeyEvent *event)
{
    switch(event->key())
    {
     case Qt::Key_W://按下w或↑
     case Qt::Key_Up:
     {
        stepAdd();
        m_pole_widget->setRect(4,m_step);
        m_pole_widget->move(m_pole_widget->x(),m_pole_widget->y()-m_step_len);
     }
     break;
     case Qt::Key_S:
     case Qt::Key_Down:
     {
        stepAdd();
        m_pole_widget->setRect(1,m_step);
        m_pole_widget->move(m_pole_widget->x(),m_pole_widget->y()+m_step_len);
     }
     break;
     case Qt::Key_A:
     case Qt::Key_Left:
     {
        stepAdd();
        m_pole_widget->setRect(2,m_step);
        m_pole_widget->move(m_pole_widget->x()-m_step_len,m_pole_widget->y());
     }
     break;
     case Qt::Key_D:
     case Qt::Key_Right:
     {
        stepAdd();
        m_pole_widget->setRect(3,m_step);
        m_pole_widget->move(m_pole_widget->x()+m_step_len,m_pole_widget->y());
     }
     break;
    }
}

void PlatFormDialog::stepAdd()
{
    if(m_step == 4){
        m_step = 1;
    }else{
        m_step ++;
    }
}

PlatFormDialog::~PlatFormDialog()
{
    delete ui;
    if(m_pole_widget){
        delete m_pole_widget;
        m_pole_widget = nullptr;
    }
}
