#ifndef TICTACTOEWIDGET_H
#define TICTACTOEWIDGET_H
#include <QWidget>

class QPushButton;


class TicTacToeWidget : public QWidget
{
    Q_OBJECT

public:
    TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();
private:
    int rowsCount = 3;
    int columnsCount = 3;
    int cells = rowsCount * columnsCount;
    QList<QPushButton*> board;

    //methods
    void setupBoard();
    void initNewGame();
};

#endif // TICTACTOEWIDGET_H
