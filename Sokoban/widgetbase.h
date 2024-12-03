#ifndef WIDGETBASE_H
#define WIDGETBASE_H

#include <QWidget>
#include <QPainter>

class WidgetBase : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetBase(QWidget *parent = nullptr);

    void Init(QString _path, int width, int hight);

    void paintEvent(QPaintEvent *event);

    void setRect(int x,int y);

signals:

private:
    QString m_path;
    QRect srcRect;

};

#endif // WIDGETBASE_H
