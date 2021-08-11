#ifndef BOARD_H
#define BOARD_H
#include <stdlib.h>
#include <iostream>
#include <vector>
#include "../include/Pedal.h"

class Board
{
    public:
        Board();
        Board(int test);
    private:
    std::vector<Pedal> theBoard;
};

#endif