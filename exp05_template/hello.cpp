#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QWidget win;

  win.setWindowTitle("MyHello");
  win.show();

  return QApplication::exec();
}