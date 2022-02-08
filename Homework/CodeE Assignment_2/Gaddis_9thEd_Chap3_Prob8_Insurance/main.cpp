/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  How much insurance is needed
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input,                //Replacement cost of a building
        amtInsr;              //Minimum amount of insurance he or she should buy for the property
    
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator" << endl;
    cout << "How much is your house worth?" << endl;
    cin >> input;
    
    //Map inputs -> outputs
    amtInsr = input * 0.8f;       //Financial experts advise that property owners should insure their homes for at least 80 percent of the amount
    
    //Display the outputs
    cout << "You need $" << amtInsr << " of insurance.";

    //Exit stage right or left!
    return 0;
}