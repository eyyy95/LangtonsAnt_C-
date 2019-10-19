#include"Board.hpp"
#include<iostream>
using std::cout;
using std::endl;



Board::Board(int userRows, int userColumns)
{
    boardSpace **antBoard = new boardSpace*[userColumns]; //Dynamically allocate 2D array of user's choosing
        for(int i=0; i<userRows; ++i)
        {
            antBoard[i]= new boardSpace[userRows]; //default constructor will initialize all boardspace objects with same values (no ant & white)
        }

    Rows = userRows;
    Columns = userColumns; //These variables will help us determine the outer bounds of our matrix, which we'll need for determining edge cases

}    

Board::~Board()
{
  for(int i=0; i<Rows; ++i)
    {
      delete antBoard[i];
    }

  delete[] antBoard;
}

int Board::getRows()
{
    return Rows;
}

int Board::getColumns()
{
    return Columns;
}

boardSpace Board::getBoardSpace()
{
  return **antBoard;
}

int Board::updateAntLocation(boardSpace **sampleBoard, Ant sampleAnt) //Will change boardspace to display "*" after the ant has moved
{
    (sampleBoard[(sampleAnt.getAntRow()-1)][(sampleAnt.getAntColumn()-1)]).changeAnt(); //We subtract one to avoid off by one errors for the matrix
    (sampleBoard[(sampleAnt.getAntRow()-1)][(sampleAnt.getAntColumn()-1)]).changeSpaceColor(); //The ant will flip the space's color
}

void Board::printBoard() //Print the board by using the displaySpace function which will display output based on ant, and then color
{
    for(int i = 0; i < Columns; ++i)
    {
        for(int j = 0; j < Rows; ++j)
        {
            (antBoard[i][j]).displaySpace();
        }

        cout << " " << endl;
    }
}
