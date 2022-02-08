/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 4, 2022, 10:54 PM
 * Purpose: All Projects start by using the CPP Template
 *          It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Declare Variables
    int fact1, n;
    
    //Initialize Variables
    fact1 = 1;
    n = 13;
    
    while(n <= 0 || n > 12){
        cout << "The current input is <= 0 or >12" << endl;
        cout << "Please input a number between 1 and 12" << endl;
        cin >> n;
    }
    
    //Map the inputs/known to the outputs
    for(int i = 1; i <= n; i++){
        fact1 *= i;
    }
    
    //Display the outputs
    cout << n << "! = " << fact1 << endl;
    
    //Exit the program
    return 0;
}

