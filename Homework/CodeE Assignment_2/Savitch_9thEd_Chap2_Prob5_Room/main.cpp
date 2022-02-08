/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Calculate room occupancy and limits.
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
    short maxPpl,           //Max number of people that can attend
          nmbPpl;           //Number of people attending
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxPpl >> nmbPpl;
    
    if(nmbPpl > maxPpl){
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << nmbPpl - maxPpl <<  " to avoid fire violation.";
    } else {
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << maxPpl - nmbPpl << " will be allowed without violation.";
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}