#include "tictactoewidget.h"
#include <QGridLayout>
#include <QPushButton>

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
        : QWidget(parent)
{
    setupBoard();
}

TicTacToeWidget::~TicTacToeWidget()
{

}

void TicTacToeWidget::setupBoard()
{
    QGridLayout *gridLayout = new QGridLayout;

    for(int row = 0; row < rowsCount; ++row) {
        for(int column = 0; column < columnsCount; ++column) {
            QPushButton *button = new QPushButton;
            button->setSizePolicy(QSizePolicy::Minimum,
                                  QSizePolicy::Minimum);
            button->setText(" ");
            gridLayout->addWidget(button, row, column);
            board.append(button);
        }
    }

    setLayout(gridLayout);
}

void TicTacToeWidget::initNewGame()
{
    for(int i=0; i<cells; ++i) {
        board.at(i)->setText(" ");
    }
}
