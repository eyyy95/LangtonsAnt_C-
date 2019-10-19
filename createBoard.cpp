#include"createBoard.hpp"

boardSpace createBoard(unsigned int userRow, unsigned int userColumn)
{
    boardSpace **board = new boardSpace*[userRow];
        for(int i=0; i<userRow; ++i)
        {
            board[i] = new boardSpace[userColumn];
        }

}

