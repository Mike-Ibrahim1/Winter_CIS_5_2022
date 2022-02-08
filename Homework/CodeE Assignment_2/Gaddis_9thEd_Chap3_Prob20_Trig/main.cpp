/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Use the trig functions!
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int aDegree;     //Angle Degree

    float sinDeg,               //Trig function sin
          cosDeg,               //Trig function cos 
          tanDeg;               //Trig function tan
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> aDegree;
    
    sinDeg = sin(aDegree * PI/180);
    cosDeg = cos(aDegree * PI/180);
    tanDeg = tan(aDegree * PI/180);
    
    
    
    //Display the outputs
        
    cout << fixed << setprecision(4) << showpoint;
    cout << "sin(" << aDegree << ") = " << setw(6) << sinDeg << endl;
    cout << "cos(" << aDegree << ") = " << setw(6) << cosDeg << endl;
    cout << "tan(" << aDegree << ") = " << setw(6) << tanDeg;

    //Exit stage right or left!
    return 0;
}