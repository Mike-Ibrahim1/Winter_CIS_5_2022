/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Calculate the gross pay!
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
    float pyPrHr,       //Pay per hour ($)
          grsPay;       //Gross pay ($)
          
    float overTime,     //How much hours worked overTime
          otPay;        //How much the pay is TOTAL

    unsigned short hrsWrkd; //Number of hours worked
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> pyPrHr >> hrsWrkd;
    
    if(hrsWrkd > 40){
        grsPay = 40*pyPrHr + (hrsWrkd-40) * 2 * pyPrHr;
        
    } else{
        grsPay = pyPrHr*hrsWrkd;
    }
    
    cout << std::fixed << setprecision(2);
    cout << "Paycheck = $" << setw(7) << grsPay;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}