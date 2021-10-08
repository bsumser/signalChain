#include "../include/Board.h"
#include "../include/Pedal.h"

Board::Board()
{
    std::cout << "Class constructor" << std::endl;
    std::vector<Pedal> temp = theBoard;
}

Board::Board(int test)
{
    std::cout << "Overloaded Class constructor" << std::endl;
    std::vector<Pedal> temp = theBoard;
}

void signalProp()
{
    //for each pedal in board, pass value through each pedal
    for (int i = 0; i < theBoard.length(); i++)
    {
        std::cout << "pedal " << i << std::endl;
    }
}