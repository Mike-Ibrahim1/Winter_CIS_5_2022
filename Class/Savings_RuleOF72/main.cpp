/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 10:54 PM
 * Purpose: Savings with Rule of 72
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
const unsigned char PERCENT = 100;  //Conversion to Decimal from Percent

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv,                           //Present Value   ($)
          fv,                           //Future Value    ($)
          intrst,                       //Yearly Interest ($)
          intRate;                      //Interest Rate   (%)
    
    unsigned char nCmpPds;              //Number of compounding periods (Years)
    unsigned short stYear;              //Starting Year
    //Initialize Variables
    pv = 1e2f;          //$100
    intRate = 9;        //9%
    stYear = 2022;      //Starting year
    
    //Map the inputs/known to the outputs    
    //Display the outputs
    nCmpPds = 72 / intRate;             //Rule of 72 - Number of years to approximately double initial Savings
    intRate /= PERCENT;
    fv = pv;
    cout << fixed << setprecision(2) << showpoint;
    cout << "$" << pv << " = Initial Principle $'s" << endl;
    cout << intRate * PERCENT <<   " = Interest Rate %" << endl;
    
    cout << endl << setw(10) << "Years" << setw(10) << "Year" 
         << setw(15) << "Retirement" << setw(15) << "Interest" << endl;
    
    for(int years = 0; years <= nCmpPds; years++){
        intrst = fv*intRate;
        
        cout << setw(10) << years << setw(10) << years+stYear 
             << setw(15) << fv << setw(15) << intrst << endl;
        
        fv += intrst;
    }
    
    
    //Exit the program
    return 0;
}

