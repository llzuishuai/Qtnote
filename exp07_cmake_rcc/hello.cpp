#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <qlabel.h>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QLabel myshow;

  myshow.setPixmap(QPixmap(":/images/Myimg/qrsj.png"));
  myshow.show();
  return QApplication::exec();
}