#ifndef ANT_HPP
#define ANT_HPP
#include"boardSpace.hpp"
#include"Board.hpp"

class Board;
class Ant{
private:
    int antRow,
        antColumn; //These two integers combined will represent location
    int antDirection; //Directions will be represented by integers, North = 0, East = 1, South = 2, West = 3

public:
    Ant();
    void setAntLocation(int userRow, int userColumn);
    int getAntRow();
    int getAntColumn();
    void setDirection(int integerDirection);
    int changeDirection(boardSpace antSpace);
    int checkAntEdgeCase(Board sampleBoard);
    int moveAnt();
};
#endif // ANT_HPP
