#include"menuFunction.hpp"
#include<stdlib.h>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;


int menuFunction()
{
     int userInput;

     cout << "This is the Langton's ant simulation. What would you like to do (enter the number of your option)?" << endl;
     cout << "1. Start Langton's Ant simulation. " << endl;
     cout << "2. Quit. " << endl;
     cin >> userInput;

     while(1) //User validation that prevents the input of non-integer data
    {
        if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000,'\n');
                cout<< "You have entered invalid input data type. Please enter an integer" <<endl;
                cin>> userInput;
            }
        if(!cin.fail())
            break;
    }

    while(userInput < 1 || userInput > 2)
    {
        cout << "Invalid option. Please select either 1 or 2";
        cin >> userInput;
    }


    if(userInput == 2)
    {
      exit(1);
    }
    
    else
      return userInput;
    
}

