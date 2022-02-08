/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 24, 2022, 6:17 PM
 * Purpose: Homework 4
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
const float LIT2GAL = 0.264179f;    //Conversion for Liters to Gallons

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!

    //Declare Variables
    unsigned short nLitGas, //Numbers of Liters of Gasoline
            nMiles, //Numbers of Miles Traveled
            mpg; //Miles Per Gallon
    char uI;
    bool again;

    //Initialize or input i.e. set variable values
    do {
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> nLitGas;
        cout << endl;
        cout << "Enter number of miles traveled:" << endl;
        cin >> nMiles;
        cout << endl;
        cout << "miles per gallon:" << endl;
        cout << fixed << setprecision(2);
        cout << nMiles / (nLitGas * LIT2GAL) << endl;
        cout << "Again:" << endl;
        cin >> uI;
        if (uI == 'y') {
            again = true;
            cout << endl;
        } else again = false;
    } while (again == true);

    //Map inputs -> outputs

    //Display the outputs

    //Exit stage right or left!
    return 0;
}

