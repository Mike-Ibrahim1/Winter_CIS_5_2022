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
    char pckg;
    short hrs;
    float bill;
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pckg >> hrs;
    
    if(hrs > 744)
        hrs = 0;
    
    switch(pckg){
        case 'A':
            if(hrs > 10){
                bill = 9.95f + (hrs-10) * 2.0f;
                break;
            }
            bill = 9.95f;
            break;
        case 'B':
            if(hrs > 20){
                bill = 14.95f + (hrs-20) * 1.0f;
                break;
            }
            bill = 14.95;
            break;
        case 'C':
            bill = 19.95f;
            break;
        default:
            break;
    }
    
    cout << showpoint << fixed << setprecision(2);
    cout << "Bill = $" << setw(6) << bill;

    //Exit stage right or left!
    return 0;
}