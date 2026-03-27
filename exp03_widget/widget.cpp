#include <QDebug>
#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnCalc_clicked()
{
    qDebug() << "btnCalc clicked";
    //获取半径的值，计算圆的面积
    double r=ui->editRadius->text().toDouble();
    double res=r*r*3.14;
    QString str=ui->label_result->text();
    QString pattern="结果：%1";
    ui->label_result->setText(pattern.arg(res));
}
