#include "widgetbase.h"

WidgetBase::WidgetBase(QWidget *parent) : QWidget(parent)
{
    // 定义要显示的图片区域（例如，我们想显示从(50, 50)开始，宽200px，高150px的部分）
    srcRect.setRect(0, 0, 32, 48);// 源矩形区域
}

void WidgetBase::Init(QString _path, int width, int hight)
{
    m_path = _path;
    this->setFixedSize(width, hight);
}

void WidgetBase::paintEvent(QPaintEvent *event)
{
    // 创建QPainter对象来绘制图像
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);
    // 加载QImage图像
    QImage image(m_path);  // 图片路径可以是资源文件路径、绝对路径或相对路径

    // 定义目标区域，我们将其绘制到窗口的左上角(0, 0)
    QRect destRect(0, 0, srcRect.width(), srcRect.height());  // 目标矩形区域
    // 绘制图像的指定部分
    painter.drawImage(destRect, image, srcRect);
}

void WidgetBase::setRect(int x, int y)
{
    //x方向,y第几个
    srcRect.setRect((y-1)*32, (x-1)*48, 32, 48);// 源矩形区域
}
