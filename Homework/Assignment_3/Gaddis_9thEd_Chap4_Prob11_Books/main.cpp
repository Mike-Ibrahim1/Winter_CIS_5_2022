/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 20, 2022, 11:10 PM
 * Purpose:  Homework Assignment 3 Code-E
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short uInput, points;
    
    //Initialize or input i.e. set variable values
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> uInput;
    cout << "Books purchased =" << setw(3) << uInput << endl;
    
    if(uInput == 0)
        points = 0;
    else if(uInput == 1)
        points = 5;
    else if(uInput == 2)
        points = 15;
    else if(uInput == 3)
        points = 30;
    else
        points = 60;
        
        
    cout << "Points earned   =" << setw(3) << points;
    
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}