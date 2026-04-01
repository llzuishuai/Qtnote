#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QString>
#include <QDebug>
using std::cout;
using std::endl;

/*QString 的底层存储和终端显示*/
void test01(){

    //1.传统C/C++的字符流
    const char *str1="hello你好";
    std::string str2="hello你好";
    //2.
    QString str3="hello你好";

    cout<<str1<<endl;
    cout<<str2<<endl;
    qDebug()<<str3;

}

/*查看QString的内部结构，以及COW效果*/
void test02(){
    QString a1="12345";
    QString a2(a1);
    qDebug()<<"a1="<<a1<<"a1 data"<<a1.constData()<<"a1 data_ptr"<<a1.data_ptr().d_ptr();
    qDebug()<<"a2="<<a2<<"a2 data"<<a2.constData()<<"a2 data_ptr"<<a2.data_ptr().d_ptr();

    a2[1]='w';
    qDebug()<<"===============================================";
    qDebug()<<"a1="<<a1<<"a1 data"<<a1.constData()<<"a1 data_ptr"<<a1.data_ptr().d_ptr();
    qDebug()<<"a2="<<a2<<"a2 data"<<a2.constData()<<"a2 data_ptr"<<a2.data_ptr().d_ptr();
}

int main(int argc, char *argv[])
{
     QCoreApplication a(argc, argv);

   // test01();
    test02();
    return a.exec();
}
