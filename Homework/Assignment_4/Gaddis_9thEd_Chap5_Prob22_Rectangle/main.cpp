/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 24, 2022, 6:17 PM
 * Purpose: Homework 4
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    short nInp;
    char cInp;
    
    cin >> nInp >> cInp;
    
    for(int i = 0; i < nInp; i++){
        
        for(int j = 0; j < nInp; j++){
            cout << cInp;
        }
        if(i != nInp-1)
            cout << endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

