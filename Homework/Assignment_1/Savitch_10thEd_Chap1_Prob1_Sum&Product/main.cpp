/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 13, 2022, 10:47 PM
 * Purpose: Programming Projects Savitch
 *          Take in two integers then output their sum and their product
 */

//System Level Libraries
#include <iostream> //Input-Output Library
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

    short oVar,             //Variable One
          sVar,             //Variable Two
          sum,              //Sum of the two variables
          product;          //Product of the two variables
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout << "Input first number: ";
    cin >> oVar;
    cout << "Input second number: ";
    cin >> sVar;
    
    sum = oVar + sVar;
    product = oVar * sVar;
    
    //Display the outputs
    cout << "The sum of the two numbers is: " << oVar << " + " << sVar << " = " << sum << endl;
    cout << "The product of the numbers is: " << oVar << " * " << sVar << " = " << product << endl;
    
    //Exit the program
    return 0;
}

