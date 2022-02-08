/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Calculate the Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short   inp1,
                     inp2, 
                     inp3,
                     inp4, 
                     inp5;
         
    float nAvg;
    
    //Initialize or input i.e. set variable values
    cin >> inp1 >> inp2 >> inp3 >> inp4 >> inp5;
    
    //Map inputs -> outputs
    nAvg = (inp1+inp2+inp3+inp4+inp5) / 5.0;
    
    
    //Display the outputs
    cout << "Input 5 numbers to average." << endl;
    cout << std::fixed << setprecision(1);
    cout << "The average = " << (nAvg);
    
    //Exit stage right or left!
    
    return 0;
}