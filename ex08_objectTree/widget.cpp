#include "widget.h"
#include <QDebug>
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug() << "Widget constructor";
    QPushButton *btn1=new QPushButton("ok",this);
}

Widget::~Widget() {
    qDebug() << "~Widget()";
}
