#include"Ant.hpp"


Ant::Ant()
{
    antRow = 0;
    antColumn = 0;
    antDirection = 0; //0 represents North
}

void Ant::setAntLocation(int userRow, int userColumn) //Function allows us to designate starting location at beginning of simulation
{
    antRow = userRow;
    antColumn = userColumn;
}

int Ant::getAntColumn() //Get functions will be useful in positioning the ant on board after each move
{
    return antColumn;
}

int Ant::getAntRow()
{
    return antRow;
}

void Ant::setDirection(int integerDirection) //Allows user to choose direction if desired; needs to be 0,1,2,3
{
    antDirection = integerDirection;

}

int Ant::changeDirection(boardSpace antSpace)
{
    if(antSpace.getSpaceColor()==0) //If the ant's space is white, it will rotate 90 degrees to the right before it moves forward in that direction
    {
        ++antDirection; //Adding one to the direction will rotate it to the right
    }

    else //if ant's space is black, it will rotate 90 degrees to the left
    {
        if(antDirection = 0)
        {
            antDirection = 3; //Rotate 90 to left from north will point west(3), subtraction decrementor will give invalid value
        }

        else //All other directions will undergo subtraction for rotation
        {
            --antDirection; //Subtracting one will rotate 90 degrees to left
        }
    }
}

int Ant::checkAntEdgeCase(Board sampleBoard)
{
    //Start with corner cases as these will take precedence and have two possible direction switches
    if(antColumn == 1 && antRow == 1) //If ant is in the top left corner, it cannot go north nor left, so we will flip depending on those directions
    {
        if(antDirection == 0) //North
        {
            antDirection = 2; //Flip to South
        }

        if(antDirection == 3) //West
        {
            antDirection = 1; //Flip to east
        }
    }

    if(antColumn == 1 && antRow == sampleBoard.getRows()) //If ant is in the bottom left corner, cannot go south or left
    {
        if(antDirection == 3) //West
        {
            antDirection = 1; //Flip to east
        }

        if(antDirection == 2)
        {
            antDirection = 0;
        }
    }

    if(antColumn == sampleBoard.getColumns() && antRow == 1) //If ant is in the top right corner, it cannot go north or right
    {
        if(antDirection == 0) //North
        {
            antDirection = 2;
        }

        if(antDirection == 1) //Right
        {
            antDirection = 3;
        }
    }

    if(antColumn == sampleBoard.getColumns() && antRow == sampleBoard.getRows()) //If ant is in the bottom right corner, it cannot go south or right
    {
        if(antDirection == 2) //South
        {
            antDirection = 0;
        }

        if(antDirection == 1) //Right
        {
            antDirection = 3;
        }
    }

    //Now that corner cases have been taken care of, we can go to the other edge cases

    if(antColumn == sampleBoard.getColumns() && antDirection == 1) //If the ant is in the last column and headed east
    {
        antDirection = 3; //Flip the ant around
    }

    if(antColumn == 1 && antDirection == 3) //If the ant is in the first column and headed west
    {
        antDirection = 1; //Flip ant around to east
    }

    if(antRow == 1 && antDirection == 0) //If the ant is in the first row, it cannot head north and needs to be turned around
    {
        antDirection = 2; //Flip the ant around to south
    }

    if(antRow == sampleBoard.getRows() && antDirection == 2) //If the ant is in the last row, it cannot go south
    {
        antDirection = 0;
    }
}

int Ant::moveAnt() //This function is responsible for moving both the ant object; board object will collect the numbers and move the ant with its own function
{


    if(antDirection == 0) //If the direction is North
    {
        --antRow; //The 0,0 location will be the top left corner, so going north would be decreasing the column number

    }

    if(antDirection == 1) //If the ant direction is East
    {
        ++antColumn; //Going east will be going further down the columns, which is increasing in count from left to right
    }

    if(antDirection == 2) //Going south, opposite of North
    {
        ++antRow;
    }

    if(antDirection == 3) //Going east, opposite of North
    {
        --antColumn;
    }
}
