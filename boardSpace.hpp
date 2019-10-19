#ifndef BOARDSPACE_HPP
#define BOARDSPACE_HPP


class boardSpace
{

private:
    unsigned int rowNumber,
        columnNumber;
    int spaceColor; //White = 0, Black = 1
    int antOrNot; //No ant = 0, Ant = 1


public:
    boardSpace(); //default constructor
    void setRow(unsigned int userRow);
    int getRow();
    void setColumn(unsigned int userColumn);
    int getColumn();
    int getSpaceColor();
    int changeSpaceColor();
    void displaySpace();
    int changeAnt();

};
#endif // BOARDSPACE_HPP
