/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  How many cans of diet coke can I consume before losing all my weight?
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MASSCNV = 45359.2/100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short massMse,     //Mass of mouse (g)
                   msSwtKl,     //Mass of sweetener that killed the mouse (g)
                   massCan,     //Mass of 1 can of soda pop (g)
                   nmbCans;     //Max number of cans to be consumed
    
    float conSwet,              //Concentration of sweetener (%)
          whtFrnd;              //Weight of friend (lbs)
          
    //Initialize or input i.e. set variable values
    massMse = 35;               //Grams
    msSwtKl = 5;                //Grams
    massCan = 350;              //Grams
    conSwet = 0.001f;           //Percent
    
    //Map inputs -> outputs
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieters weight in lbs." << endl;
    cin >> whtFrnd;
    
    nmbCans = (msSwtKl * MASSCNV * whtFrnd) / (massCan * conSwet * massMse);
    
    cout << "The maximum number of soda pop cans\n";
    cout << "which can be consumed is" << setw(6) << nmbCans << " cans";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}