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
    short inp;
    short minInp, maxInp;
    
    minInp = 99;
    maxInp = 0;
    
    //Initialize or input i.e. set variable values
    do{
        cin >> inp;
        if(inp > maxInp && inp != -99)
            maxInp = inp;
        if(inp < minInp && inp != -99)
            minInp = inp;
    } while(inp != -99);
    
    cout << "Smallest number in the series is " << minInp << endl;
    cout << "Largest  number in the series is " << maxInp;

    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

