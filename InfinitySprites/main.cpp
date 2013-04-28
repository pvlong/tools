#include <QtGui/QApplication>
#include "ui_main.h"

int main(int argc,char *argv[]){
  QApplication app(argc,argv);
  QMainWindow *main = new QMainWindow;
  Ui::MainWindow ui;
  ui.setupUi(main);

  main->show();
  return app.exec();
}
