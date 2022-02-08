/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Calculate the new compensation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prevSal,      //Previous Annual Salary ($)
          retrPay,      //Retroactive pay ($)
          nAnlSal,      //New annual salary ($)
          nMonSal;      //New monthly salary ($)
          
    const float incrPay = 0.076f; 
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input previous annual salary." << endl;
    cin >> prevSal;
    
    retrPay = prevSal / 2 * incrPay;
    nAnlSal = prevSal * (1 + incrPay);
    nMonSal = nAnlSal / 12;
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "Retroactive pay    " << "= $" << setw(7) << retrPay << endl;
    cout << "New annual salary  " << "= $" << setw(7) << nAnlSal << endl;
    cout << "New monthly salary " << "= $" << setw(7) << nMonSal;
    

    //Exit stage right or left!
    return 0;
}