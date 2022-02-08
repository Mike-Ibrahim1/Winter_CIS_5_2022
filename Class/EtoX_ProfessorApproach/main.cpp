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
#include <cmath>    //Exact value for the Exponential 
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
    int nTerms;
    float x, etox, term;
    
    //Initialize Variables
    etox = term = 1.0f;
    cout << "This problem approximates the exponential" << endl;
    cout << "Input x and the number of terms to approximate e^x" << endl;
    cin >> x >> nTerms;
    
    //Map the inputs/known to the outputs
    for (int i = 1; i < nTerms; i++){
        term *= x/i;
        etox += term;
    }
    
    //One Line of Code
    /*
     * for(int i = 1; i < nTerms; term*=x/n, etox+=term, i++);
     */
    
    //Display the outputs
    cout << "The theoretical answer e^" << x << " = " << exp(x) << endl;
    cout << "The approximate answer e^" << x << " = " << etox << endl;
    
    //Exit the program
    return 0;
}

