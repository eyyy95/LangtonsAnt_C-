#include"boardSpace.hpp"
#include<iostream>
using std::cout;

boardSpace::boardSpace()
{
    rowNumber = 0;
    columnNumber = 0;
    antOrNot = 0; //0 represents no ant
    spaceColor = 0; //0 represents white
}

void boardSpace::setRow(unsigned int userRow)
{
    rowNumber = userRow;
}

int boardSpace::getRow()
{
    return rowNumber;
}

void boardSpace::setColumn(unsigned int userColumn)
{
    columnNumber = userColumn;
}

int boardSpace::getColumn()
{
    return columnNumber;
}

int boardSpace::getSpaceColor()
{
    return spaceColor;
}

int boardSpace::changeSpaceColor()
{
    if(spaceColor == 0)
    {
        spaceColor = 1;
    }

    else if(spaceColor == 1)
    {
        spaceColor = 0;
    }
}

void boardSpace::displaySpace()
{
    if(antOrNot == 1)
    {
        cout << " * ";
    }

    else
    {
        if(spaceColor == 1)
        {
            cout << " # ";
        }

        else
        {
            cout << "   ";
        }
    }

}

int boardSpace::changeAnt()
{
    if(antOrNot == 1)
    {
        antOrNot = 0;
    }

    else
    {
        antOrNot = 1;
    }
}
