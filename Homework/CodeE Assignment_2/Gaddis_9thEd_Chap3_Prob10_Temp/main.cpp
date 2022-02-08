/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Baby is it hot outside?
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
    float fTemp,
          cTemp;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit" << endl;
    cin >> fTemp;
    
    cTemp = 5.0/9 * (fTemp - 32);
    
    //Display the outputs
    
    cout << std::fixed << setprecision(1);
    cout << fTemp << " Degrees Fahrenheit = " << cTemp << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}