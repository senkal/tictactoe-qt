#include "tictactoewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    TicTacToeWidget widget;
    widget.show();

    return app.exec();
}
