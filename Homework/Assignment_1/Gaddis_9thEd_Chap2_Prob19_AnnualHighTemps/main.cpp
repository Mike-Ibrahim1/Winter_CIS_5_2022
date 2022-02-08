/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 11, 2022, 3:31 AM
 * Purpose: Homework Assignment 1
 *          Annual High Temperatures
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    char nycDeg,                //Average High Temperature in New York City in July (Fahrenheit)
         denDeg,                //Average High Temperature in Denver in July (Fahrenheit)
         pnxDeg;                //Average High Temperature in Phoenix in July (Fahrenheit)
    
    float nAvgNyc,              //New average July high temperature in New York City if temperature rose 2 percent (Fahrenheit)
          nAvgDen,              //New average July high temperature in Denver if temperature rose 2 percent (Fahrenheit)
          nAvgPnx;              //New average July high temperature in Phoenix if temperature rose 2 percent (Fahrenheit)
    
    //Initialize Variables
    nycDeg = 85;                //Degrees Fahrenheit
    denDeg = 88;                //Degrees Fahrenheit
    pnxDeg = 106;               //Degrees Fahrenheit
    
    //Map the inputs/known to the outputs
    nAvgNyc = nycDeg * (1 + 0.02f);
    nAvgDen = denDeg * (1 + 0.02f);
    nAvgPnx = pnxDeg * (1 + 0.02f);
    
    //Display the outputs
    cout << "New average July high temperature in the following cities if temperatures rose 2 percent: " << endl;
    cout << "New York City: " << nAvgNyc << " F" << endl;
    cout << "Denver: " << nAvgDen  << "F" << endl;
    cout << "Phoenix: " << nAvgPnx << "F" << endl;
    //Exit the program
    return 0;
}

