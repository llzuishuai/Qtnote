#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QString>
#include <QDebug>
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //1.传统C/C++的字符流
    const char *str1="hello你好";
    std::string str2="hello你好";
    //2.
    QString str3="hello你好";

    cout<<str1<<endl;
    cout<<str2<<endl;
    qDebug()<<str3;

    return a.exec();
}
