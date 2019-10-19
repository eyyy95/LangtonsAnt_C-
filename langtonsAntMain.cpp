#include<iostream>
#include"menuFunction.hpp"
#include"boardSpace.hpp"
#include"Ant.hpp"
using std::cout;
using std::cin;
using std::endl;


int main ()
{

   //The function will quit the program if the quit option is selected. If this function passes true, the simulation will carry on

  if(menuFunction() == 1)
    {
    unsigned int inputRows, //unsigned int since negative values for these don't make sense
        inputColumns,
        inputSteps,
        startingRow,
        startingColumn;

    cout << "How many rows will the board have?" << endl;
    cin >> inputRows;

    while(1) //User validation that prevents the input of non-integer data
    {
        if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                cin>> inputRows;
            }
        if(!cin.fail())
            break;
    }

    cout << "How many columns will the board have?" << endl;
    cin >> inputColumns;

        while(1) //User validation that prevents the input of non-integer data
        {
            if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(1000,'\n');
                    cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                    cin>> inputColumns;
                }
            if(!cin.fail())
                break;
        }

    cout << "How many steps would you like for the simulation to run?" << endl;
    cin >> inputSteps;

    while(1) //User validation that prevents the input of non-integer data
    {
        if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                cin>> inputSteps;
            }
        if(!cin.fail())
            break;
    }

    cout << "Where should the ant start? Enter the row of the starting location." << endl;
    cin >> startingRow;

    while(1) //User validation that prevents the input of non-integer data
    {
        if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                cin>> startingRow;
            }
        if(!cin.fail())
            break;
    }

    cout << "Enter the column of the starting location." << endl;
    cin >> startingColumn;

    while(1) //User validation that prevents the input of non-integer data
    {
        if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                cin>> startingColumn;
            }
        if(!cin.fail())
            break;
    }
    

    Board antBoard(inputRows, inputColumns); //Declare our board for simulation
    

    Ant simulationAnt; //create ant for the simulation

    simulationAnt.setAntLocation(startingRow, startingColumn);//This will start the ant at the user's specified location
    //antBoard.updateAntLocation(); //Change the board space of the starting location to contain ant

    //Simulation will run according to the amount of steps the user specified

    for(int i=0; i < inputSteps; ++i) //For loop to repeat a simulation step until we've reached the user's amount of steps
    {
      //simulationAnt.changeDirection())  //Start by changing the ant's direction according to its space's color
        simulationAnt.moveAnt(); //Move the ant to new space according to direction, object will contain new location. Edge cases addressed in this function
        //antBoard.updateAntLocation(antBoard, simulationAnt); //Update the boardspace by using the location data from the ant object; will change ant state and the board's color

        antBoard.printBoard(); //Print the updated board at the end of every simulation step

    }
    }



}
