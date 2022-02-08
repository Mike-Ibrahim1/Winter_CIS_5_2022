/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 20, 2022, 11:10 PM
 * Purpose:  Homework Assignment 3 Code-E
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short nChecks;          //Number of checks
                    
    float begBal,           //Beginning balance ($)
          chkFee,           //Check Fee ($)
          monFee,           //Fee for the month ($)
          lowBal,           //Low balance fee ($)
          newBal;           //New Balance ($)
          
    
    //Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> begBal >> nChecks;
    
    if(nChecks < 0)
        nChecks = 0;
    else if(nChecks < 20)
        chkFee = nChecks * 0.10f;
    else if(nChecks >= 20 && nChecks <39)
        chkFee = nChecks * 0.08f;
    else if(nChecks >= 40 && nChecks <59)
        chkFee = nChecks * 0.06f;
    else
        chkFee = nChecks * 0.04f;
    
    if(begBal < 0)
        cout << "This account is overdrawn!" << endl;
    
    monFee = 10.0f;
    
    if(begBal < 400)
        lowBal = 15.0f;
    
    newBal = begBal - chkFee - monFee - lowBal;
    
    
    cout << showpoint << std::fixed << setprecision(2);
    cout << "Balance     $ " << setw(8) << begBal << endl;
    cout << "Check Fee   $ " << setw(8) << chkFee << endl;
    cout << "Monthly Fee $ " << setw(8) << monFee << endl;
    cout << "Low Balance $ " << setw(8) << lowBal << endl;
    cout << "New Balance $ " << setw(8) << newBal;

    //Exit stage right or left!
    return 0;
}