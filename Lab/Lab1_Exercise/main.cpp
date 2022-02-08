/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 8, 2022, 7:01 PM
 * Purpose: Lab Exercise 1
 *          Determine which gas station is cheaper to go to
 */

//System Level Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!
const unsigned char CNVPERC = 100; //Conversion to percentage

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    
    string result;      //To determine which station is cheaper
       
//**Vehicle Variables**// For sake of simplicity, I did not make these variables to be inputted by user
    float gGage,        //Gas gage percentage full
          tnkSize,      //Size of tank (gallons)
          mpg;          //Miles per gallon
    float galReq;       //Gallons Required at fill-up
//**********************//
      
//**Gas Station 1 Variables**//
    float cosGal1,      //Regular Gas $/Gallon ($)
          mToGas1;      //Miles to gas station (Miles)
    float cstReq1,      //Cost required to fill up ($)
          ttlDis1,      //Total distance in miles back and forth (Miles)
          cstDis1,      //Cost to drive to and back ($)
          ttlCst1,      //Total cost with mileage to and from GS ($)
          prcMil1;      //Price per gallon with miles to and from GS ($)
//****************************//
    
//**Gas Station 2 Variables**//
    float cosGal2,      //Regular Gas $/Gallon ($)
          mToGas2;      //Miles to gas station (Miles)
    float cstReq2,      //Cost required to fill up ($)
          ttlDis2,      //Total distance in miles back and forth (Miles)
          cstDis2,      //Cost to drive to and back ($)
          ttlCst2,      //Total cost with mileage to and from GS ($)
          prcMil2;      //Price per gallon with miles to and from GS ($)
//****************************//
    
    //Initialize Variables
    gGage = 0.75f;      //75% full
    tnkSize = 2.2e1f;   //22.0 -> Number of gallons
    mpg = 0.17e2f;      //17.0 -> Gas Mileage
    
    //Map the inputs/known to the outputs
    galReq = (tnkSize * (1-gGage));
    
    cout << "Enter the following variables for Gas Station 1" << endl;
    cout << "Regular Gas $/Gallon: ";
    cin >> cosGal1;
    cout << "Miles to Gas Station: ";
    cin >> mToGas1;
    
    cstReq1 = galReq * cosGal1;
    ttlDis1 = 2 * mToGas1;
    cstDis1 = (ttlDis1 / mpg) * cosGal1;
    ttlCst1 = cstDis1 + cstReq1;
    prcMil1 = ttlCst1 / galReq;
    
    cout << "\nEnter the following variables for Gas Station 2" << endl;
    cout << "Regular Gas $/Gallon: ";
    cin >> cosGal2;
    cout << "Miles to Gas Station: ";
    cin >> mToGas2;
    
    cstReq2 = galReq * cosGal2;
    ttlDis2 = 2 * mToGas2;
    cstDis2 = (ttlDis2 / mpg) * cosGal2;
    ttlCst2 = cstDis2 + cstReq2;
    prcMil2 = ttlCst2 / galReq;
    
    result = (prcMil1 > prcMil2) ? "Gas Station 2" : "Gas Station 1";
    
    //Display the outputs
    cout << endl;
    cout << "Gas gage % Full    = " << gGage * CNVPERC << "%" << endl;
    cout << "Size of Tank       = " << tnkSize << " gallons" <<endl;
    cout << "Gas Mileage        = " << mpg << " mpg" << endl;
    cout << "Gallons at fill-up = " << galReq << " gallons" << endl;
    
    cout << "\nGas Station 1 Numbers:          " << endl;
    cout << "Cost to fill up:                 $" << cstReq1 << endl;
    cout << "Total Distance in miles:         " << ttlDis1 << " miles" << endl;
    cout << "Cost for distance to/from:       $" << cstDis1 << endl;
    cout << "Total cost with miles to station $" << ttlCst1 << endl;
    cout << "$/Gallon with miles to station   $" << prcMil1 << endl;
    
    cout << "\nGas Station 2 Numbers:          " << endl;
    cout << "Cost to fill up:                 $" << cstReq2 << endl;
    cout << "Total Distance in miles:         " << ttlDis2 << " miles" << endl;
    cout << "Cost for distance to/from:       $" << cstDis2 << endl;
    cout << "Total cost with miles to station $" << ttlCst2 << endl;
    cout << "$/Gallon with miles to station   $" << prcMil2 << endl;
    
    cout << "\n" << result << " is the cheaper Gas Station to go to." << endl; 
    //Exit the program
    return 0;
}

