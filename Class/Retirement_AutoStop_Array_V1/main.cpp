/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on February 1, 2022, 10:38 PM
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
          salary,                       //Salary $'s/Year                     ($)
          percDep,                      //Percent of Salary to save each year (%)
          req2Rtr,                      //Required Savings to Retire with     ($)
          invRate;                      //Investment Rate                     (%)
    
    unsigned short stYear;              //Starting Year
    
    const int SIZE = 100;
    int years[SIZE],  //Index of Arrays
        date[SIZE];   //Year
    float retSavs[SIZE], //Retirement Savings
          intrst[SIZE],  //Interest/Year $'s
          yrlyDep[SIZE]; //Yearly Deposit
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
    retSavs[0] = initSav;
    req2Rtr = salary / invRate;
    yrlyDep[0] = salary * percDep;
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "$" << initSav << " = Initial Principle $'s" << endl;
    cout << invRate * PERCENT << " = Investment Rate %" << endl;
    cout << "$" << salary <<  " = Salary/Income at Retirement" << endl;
    cout << percDep * PERCENT << " = % Salary to Deposit for Retirement" << endl;
    cout << "$" << req2Rtr << " = Savings required to retire" << endl;
    
    cout << endl << setw(10) << "Years" << setw(10) << "Year" << setw(15) << "Retirement" << setw(15) << "Interest" << setw(10) << "Deposit" << endl;
    
    for(int yrs = 0; retSavs[yrs] < req2Rtr; yrs++){
        intrst[yrs] = retSavs[yrs]*invRate;
        years[yrs] = yrs;
        date[yrs] = yrs+stYear;
        yrlyDep[yrs] = yrlyDep[0];
        cout << setw(10) << years[yrs] << setw(10) << date[yrs] 
             << setw(15) << retSavs[yrs] << setw(15) << intrst[yrs] << setw(10) << yrlyDep[yrs] << endl;
        
        retSavs[yrs+1] = retSavs[yrs]+intrst[yrs];
        retSavs[yrs+1] += yrlyDep[yrs];
    }
    
    
    //Exit the program
    return 0;
}

