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
const unsigned short PERCENT = 100;

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float cPrice,   //Current Price 
          oPrice,   //Old Price 
          infRate;  //Inflation Inflation Rate 
          
    char uI;
    
    bool again;
    //Initialize or input i.e. set variable values
    do{
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> oPrice;
        infRate = (cPrice - oPrice) / oPrice;
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << setw(4) << infRate * PERCENT << "%" << endl;
        cout << endl;
        cout << "Price in one year: $" << setw(4) << (cPrice * (1+infRate)) << endl;
        cout << "Price in two year: $" << setw(4) <<  ((cPrice * (1+infRate)) * (1+infRate)) << endl;
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> uI;
        if(uI == 'y'){
            again = true;
            cout << endl;
        } else again = false;
        
    } while(again == true);
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

