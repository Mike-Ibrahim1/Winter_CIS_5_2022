/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 5, 2022 7:18 PM
 * Purpose: Hmwk 1
 *          Calculating how much paint for fence
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
    unsigned short height,  //Height of fence in feet
                   width,   //Width of fence in feet
                   covArea, //1 Side area of fence in sqrft(feet^2)
                   covPnt,  //2 Sides, 2xPaint for surface area
                   covGal,  //Surface Area covered by 1 can of Paint
                   nmGlPnt; //Number of Gallons of paint
    
    //Initialize Variables
    height = 100; //100 feet
    width = 6;    //6 feet
    covGal = 340; //340 feet coverage per gallon of paint
    
    //Map the inputs/known to the outputs
    covArea = height * width;
    covPnt = 4 * covArea;   //Due to both sides painted twice
    nmGlPnt = covPnt / covGal + 1;
    
    //Display the outputs
    cout << "This program calculates the number of gallons of paint given: " << endl;
    cout << "Fence Height = " << height << " ft" << endl;
    cout << "Fence Width  = " << width << " ft" << endl;
    cout << "Area         = " << covArea << " sqrft" << endl;
    cout << "Directions both sides painted twice" << endl;
    cout << "Surface Area to be painted = " << covPnt << " sqrft" << endl;
    cout << "The number of gallons of paint = " << nmGlPnt << endl;
    
    //Exit the program
    return 0;
}

