/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 24, 2022, 2:17 PM
 * Purpose: Retirement
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
const unsigned char PERCENT = 100;  //Conversion to Decimal from Percent

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Declare Variables
    float initSav,                      //Initial Savings                     ($)
          retSavs,                      //Retirement Savings                  ($)
          salary,                       //Salary $'s/Year                     ($)
          percDep,                      //Percent of Salary to save each year (%)
          req2Rtr,                      //Required Savings to Retire with     ($)
          intrst,                       //Yearly Interest Earned              ($)
          yrlyDep,                      //Yearly Deposit                      ($)
          invRate;                      //Investment Rate                     (%)
    
    unsigned short stYear;              //Starting Year
    //Initialize Variables
    initSav = 0;        //$0 change if you have retirement to this point
    invRate = 5;        //5%
    stYear = 2022;      //Starting year
    salary = 1e5f;      //$100,000
    percDep = 25;       //10%
    
    //Map the inputs/known to the outputs    
    //Display the outputs
    invRate /= PERCENT;
    percDep /= PERCENT;
    retSavs = initSav;
    req2Rtr = salary / invRate;
    yrlyDep = salary * percDep;
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "$" << initSav << " = Initial Principle $'s" << endl;
    cout << invRate * PERCENT << " = Investment Rate %" << endl;
    cout << "$" << salary <<  " = Salary/Income at Retirement" << endl;
    cout << percDep * PERCENT << " = % Salary to Deposit for Retirement" << endl;
    cout << "$" << req2Rtr << " = Savings required to retire" << endl;
    
    cout << endl << setw(10) << "Years" << setw(10) << "Year" << setw(15) << "Retirement" << setw(15) << "Interest" << setw(10) << "Deposit" << endl;
    
    for(int years = 0; retSavs < req2Rtr; years++){
        intrst = retSavs*invRate;
        
        cout << setw(10) << years << setw(10) << years+stYear 
             << setw(15) << retSavs << setw(15) << intrst << setw(10) << yrlyDep << endl;
        
        retSavs += intrst;
        retSavs += yrlyDep;
    }
    
    
    //Exit the program
    return 0;
}

