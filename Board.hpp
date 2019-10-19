#ifndef BOARD_HPP
#define BOARD_HPP
#include"Ant.hpp"

class Ant;
class Board
{
private:
    int Rows,
     Columns;
    boardSpace **antBoard;
 
public:
  Board(int userRows, int userColumns);  
  ~Board();
  int getRows();
    int getColumns();
  boardSpace getBoardSpace();
    int updateAntLocation(boardSpace **sampleBoard,Ant sampleAnt); //Updates ant's position on board after the move
    void printBoard();

};

#endif // BOARD_HPP
