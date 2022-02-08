/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 5, 2022, 9:20 PM
 * Purpose: Homework Assignment 1
 *          Display the receipt for the customers purchase
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
    float prcItm1,     //Price for item 1 ($)
          prcItm2,     //Price for item 2 ($)
          prcItm3,     //Price for item 3 ($)
          prcItm4,     //Price for item 4 ($)
          prcItm5,     //Price for item 5 ($)
          itmsPrc,     //Total price for all items BEFORE tax ($)
          slsTax,      //Amount of sales tax ($)
          ttlPrc;      //Total bill including all items and sales tax ($)
    
    //Initialize Variables
    prcItm1 = 15.95;
    prcItm2 = 24.95;
    prcItm3 = 6.95;
    prcItm4 = 12.95;
    prcItm5 = 3.95;
    
    //Map the inputs/known to the outputs
    itmsPrc = prcItm1 + prcItm2 + prcItm3 + prcItm4 + prcItm5; //Total price for all items ($)
    slsTax = itmsPrc * .07;                                    //Sales tax is 7 percent
    ttlPrc = itmsPrc + slsTax;
    
    //Display the outputs
    cout << "The cost of the following items are: \n"
            "Price of Item 1: $" << prcItm1 << "\n"
            "Price of Item 2: $" << prcItm2 << "\n"
            "Price of Item 3: $" << prcItm3 << "\n"
            "Price of Item 4: $" << prcItm4 << "\n"
            "Price of Item 5: $" << prcItm5 << endl;
    cout << "The sales tax is: $" << slsTax << endl;
    cout << "The total is: $" << ttlPrc << endl;
    //Exit the program
    return 0;
}

