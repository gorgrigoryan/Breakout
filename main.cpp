#include <QApplication>
#include "breakout.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Breakout window;
    window.setMinimumSize(300, 400);
    window.setMaximumSize(300, 400);
    window.setWindowTitle("Breakout");
    window.show();

    return a.exec();
}
