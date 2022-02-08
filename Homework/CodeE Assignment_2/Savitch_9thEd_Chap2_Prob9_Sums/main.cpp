/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Sum positive, negative and all numbers.
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
    short uInput,       //User Input
          posSum,       //Positive Sum 
          negSum,       //Negative sum 
          totSum;       //Total sum of all numbers
    
    //Initialize or input i.e. set variable values
    posSum = 0;
    negSum = 0;
    totSum = 0;
    
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    
    for(int i = 0; i < 10; i++){
        cin >> uInput;
        
        if(uInput > 0){
            posSum += uInput;
        }
        else {
            negSum += uInput;
        }
        
    }
    
    totSum = posSum + negSum;
    
    //Map inputs -> outputs
    cout << "Negative sum =" << setw(4) << negSum << endl;
    cout << "Positive sum =" << setw(4) << posSum << endl;
    cout << "Total sum    =" << setw(4) << totSum;
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}