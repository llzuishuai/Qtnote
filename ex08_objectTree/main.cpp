#include <QWidget>
#include <iostream>
#include <QApplication>
#include "widget.h"
using std::cout;
using std::endl;

class MyWidget:public QWidget{
public:
  explicit  MyWidget(QWidget *parent=nullptr):QWidget(parent){
       cout << __PRETTY_FUNCTION__ << endl;
  }
  ~MyWidget()override {
       cout << __PRETTY_FUNCTION__ << endl;
  }

};

void test01(){
    MyWidget a1;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w1;
    Widget *x1= new Widget(&w1);

    w1.show();

    test01();

    return a.exec();
}
