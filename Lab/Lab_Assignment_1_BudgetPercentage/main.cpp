/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 11, 2022, 3:44 AM
 * Purpose: Budget/Percentage Lab Assignment 1
 *          Calculate Military budget as percentage of federal budget
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
const char CNVPERC = 100;

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    long long natBudg,              //United States National Budget 2021 ($)
              dodBudg,              //United States DOD Budget 2021 ($)
              nasaBud;              //NASA Budget 2021 ($)
    
    float milPerc,                  //Military percentage of total national budget (%)
          nasaPer;                  //NASA percentage of total national budget (%)
    
    //Initialize Variables
    natBudg = 6.82e12;              //6.82 Trillion Dollars ($)
    dodBudg = 752.9e9;              //752.9 Billion Dollars ($)
    nasaBud = 25.2e9;               //25.2 Billion Dollars ($)
    
    //Map the inputs/known to the outputs
    milPerc = static_cast<double>(dodBudg) / natBudg;
    nasaPer = static_cast<double>(nasaBud) / natBudg;
    
    //Display the outputs
    cout << setw(6) << "$" << natBudg << "         National Budget 2021" << endl;
    cout << setw(7) << "$" << dodBudg << "         Department of Defense Budget 2021" << endl;
    cout << setw(8) << "$" << nasaBud << "         NASA Budget 2021" << endl;
    
    cout << endl;
    cout << setprecision(2) << fixed;
    cout << setw(18) << milPerc * CNVPERC << "%" << "         Military percentage of total national budget 2021" << endl;
    cout << setw(18) << nasaPer * CNVPERC << "%" << "         NASA Percentage of total national budget 2021" << endl;
    
    //Exit the program
    return 0;
}

