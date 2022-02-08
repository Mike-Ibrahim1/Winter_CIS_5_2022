/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 5, 2022, 9:06 PM
 * Purpose: Homework Assignment 1
 *          Find the restaurant bill total including meal cost, tax and tip
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
    float mlCost,   //Price of the meal in DOLLARS($)
          mlTax,    //Tax on the meal price (%)
          mlTip,    //The tip for the meal
          ttlBill;  //The total amount of the bill
    
    //Initialize Variables
    mlCost = 88.67;                     //As per instructions - In dollars ($)
    
    //Map the inputs/known to the outputs
    mlTax = mlCost * .0675;             //6.75 percent of meal cost - In dollars ($)
    mlTip = (mlCost + mlTax) * .2;      //20 percent of meal + tax cost - In dollars ($)
    ttlBill = (mlCost + mlTax + mlTip); //Total of cost, tax, and tip - In dollars ($)
    
    //Display the outputs
    cout << "The meal cost is: " << mlCost << "$" << endl;
    cout << "The tax amount is: " << mlTax << "$" << endl;
    cout << "The tip amount is: " << mlTip << "$" << endl;
    cout << "Total bill: $" << ttlBill << endl;
    
    //Exit the program
    return 0;
}

