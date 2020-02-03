#include <QApplication>
#include <QLibraryInfo>
#include <QMainWindow>
#include <QWebEngineView>
#include <QDateTime>

int main(int argc, char **argv) {
  QCoreApplication::setOrganizationName("GNU");
  QApplication app(argc, argv);
  QMainWindow window;

  window.show();
  QWebEngineView view(&window);
  window.setCentralWidget(&view);
  view.load(QUrl("https://gnu.org"));

  qDebug() << QDateTime().currentDateTime();
  return app.exec();
}
