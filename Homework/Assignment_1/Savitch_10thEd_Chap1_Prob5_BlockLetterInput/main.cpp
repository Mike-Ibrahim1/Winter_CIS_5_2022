/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 13, 2022, 11:10 PM
 * Purpose: Savitch Programming Problems
 *          Take in a character user input, then return a letter C composed with the input
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
    //Initialize Random Seed once here!
    
    //Declare Variables
    char z;        //User Input for Character
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout << "Enter A Character: ";
    cin >> z;
    
    //Display the outputs
    cout << "  " << z << " " << z << " " << z << endl;
    cout << " " << z << "    " << z << endl;
    cout << z << endl;
    cout << z << endl;
    cout << z << endl;
    cout << z << endl;
    cout << z << endl;
    cout << " " << z << "    " << z << endl;
    cout << "  " << z << " " << z << " " << z << endl;
    //Exit the program
    return 0;
}

