/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 5, 2022, 9:08 PM
 * Purpose: Homework Assignment 1
 *          Calculate employee's total annual pay
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
    float payAmt,             //Amount of pay the employee earns each pay period
          payPds,             //Number of pay periods in a year
          annPay;             //Employee's total annual pay
    
    //Initialize Variables
    payAmt = 2200.0;          //As per book instructions, the employee earns $2,200 each pay period - In dollars ($)
    payPds = 26;              //How many times the employee gets paid in a year
    
    //Map the inputs/known to the outputs
    annPay = payAmt * payPds; //Amount in dollars
    
    //Display the outputs
    cout << "The employee gets paid every two weeks." << endl;
    cout << "The employee receives $" << payAmt << " every 2 weeks." << endl;
    cout << "In a year there are " << payPds << " pay periods(times the employee gets paid)." << endl;
    cout << "The annual pay for the employee is: $" << annPay << endl;
    
    //Exit the program
    return 0;
}

