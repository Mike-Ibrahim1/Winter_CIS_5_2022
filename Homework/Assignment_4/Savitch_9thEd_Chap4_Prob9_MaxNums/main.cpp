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
    float num1, num2, num3;
    
    //Initialize or input i.e. set variable values
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << endl;
    cout << "Enter Second number:" << endl;
    cin >> num2;
    cout << endl;
    cout << "Enter third number:" << endl;
    cin >> num3; 
    cout << endl;
    
    cout << "Largest number from two parameter function:" << endl;
    
    cout << (num1 > num2 ? num1 : num2) << endl;
    cout << endl;
    
    cout << "Largest number from three parameter function:" << endl;
    
    if(num1 > num2 && num1 > num3){
        cout << num1 << endl;
    } else if(num2 > num1 && num2 > num3){
        cout << num2 << endl;
    } else {
        cout << num3 << endl;
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

