/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on February 2, 2022, 10:06 PM
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
void retCalc(float [], float [], int [], int [], float [],float,float,int);
void heading(float, float, float, float, float);
void tabDisp(float [], int [], int [], float [], float [], float);
void init(float &, float &, unsigned short &, float &, float &, float &, float [], float []);

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
    init(initSav, invRate, stYear,  salary,  percDep,  req2Rtr,  retSavs,  yrlyDep);
    
    //Business Logic/Computations
    retCalc(retSavs, intrst, years, date, yrlyDep, req2Rtr, invRate, stYear);
    
    
    //Display the Arrays
    heading(initSav, invRate, percDep, salary, req2Rtr);
    
    tabDisp(retSavs, years, date, intrst, yrlyDep, req2Rtr);
    
    
    //Exit the program
    return 0;
}

void retCalc(float retSavs[], float intrst[], int years[], int date [], float yrlyDep[], float req2Rtr, float invRate, int stYear){
    
    //Table Calculations
    for(int yrs = 0; retSavs[yrs] < req2Rtr; yrs++){
        intrst[yrs] = retSavs[yrs]*invRate;
        years[yrs] = yrs;
        date[yrs] = yrs+stYear;
        yrlyDep[yrs] = yrlyDep[0];
        retSavs[yrs+1] = retSavs[yrs]+intrst[yrs];
        retSavs[yrs+1] += yrlyDep[yrs];
    }
}

void heading(float initSav, float invRate, float salary, float percDep, float req2Rtr){
    cout << fixed << setprecision(2) << showpoint;
    cout << "$" << initSav << " = Initial Principle $'s" << endl;
    cout << invRate * PERCENT << " = Investment Rate %" << endl;
    cout << "$" << salary <<  " = Salary/Income at Retirement" << endl;
    cout << percDep * PERCENT << " = % Salary to Deposit for Retirement" << endl;
    cout << "$" << req2Rtr << " = Savings required to retire" << endl;
    
    cout << endl << setw(10) << "Years" << setw(10) << "Year" << setw(15) << "Retirement" << setw(15) << "Interest" << setw(10) << "Deposit" << endl;
}

void tabDisp(float retSavs[], int years[], int date[], float intrst[], float yrlyDep[], float req2Rtr){
    for(int yrs = 0; retSavs[yrs] < req2Rtr; yrs++){
        cout << setw(10) << years[yrs] << setw(10) << date[yrs] 
             << setw(15) << retSavs[yrs] << setw(15) << intrst[yrs] << setw(10) << yrlyDep[yrs] << endl;
    }
}

void init(float &initSav, float &invRate, unsigned short &stYear, float &salary, float &percDep, float &req2Rtr, float retSavs[], float yrlyDep[]){
    initSav = 0;        //$0 change if you have retirement to this point
    invRate = 5;        //5%
    stYear = 2022;      //Starting year
    salary = 1e5f;      //$100,000
    percDep = 5;       //10%
    
    //Map the inputs/known to the outputs    
    //Display the outputs
    invRate /= PERCENT;
    percDep /= PERCENT;
    retSavs[0] = initSav;
    req2Rtr = salary / invRate;
    yrlyDep[0] = salary * percDep;
}

