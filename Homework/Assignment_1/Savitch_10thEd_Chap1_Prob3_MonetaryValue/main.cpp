/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 13, 2022, 11:01 PM
 * Purpose: Savitch Programming Problems
 *          Let the user put in how many coins they have, and return the monetary value
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
    float penny,            //The value of penny ($)
          nickel,           //The value of nickel ($)
          dime,             //The value of dime ($)
          quarter,          //The value of quarter ($)
          total;            //The total of how much money the user has ($)
    
    unsigned short amtPeny, //How many pennies the user has
                   amtNick, //How many nickels the user has
                   amtDime, //How many dimes the user has
                   amtQtr;  //How many quarters the user has
    
    //Initialize Variables
    penny = 0.01f;
    nickel = 0.05f;
    dime = 0.10f;
    quarter = 0.25f;
    
    //Map the inputs/known to the outputs
    cout << "Type the following amount of each coin: " << endl;
    cout << "Penny: ";
    cin >> amtPeny;
    cout << "Nickel: ";
    cin >> amtNick;
    cout << "Dime: ";
    cin >> amtDime;
    cout << "Quarter: ";
    cin >> amtQtr;
    
    total = (penny * amtPeny) + (nickel * amtNick) + (dime * amtDime) + (quarter * amtQtr);
    
    //Display the outputs
    cout << "The total money you have is: $" << total << endl;
    
    //Exit the program
    return 0;
}

