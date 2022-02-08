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
    
    cin >> inp;
    
    for(int i = 0; i < inp; i++){
        
        for(int j = 0; j <= i; j++){
            cout << "+";
        }
        
        cout << endl;
        cout << endl;
    }
    
    for(int i = 0; i < inp; i++){
        
        short temp;
        for(int j = inp; j > i; j--){
            temp = j;
            cout << "+";
        }
        
        if(temp != inp){
            cout << endl;
            cout << endl;
        }
    }
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

