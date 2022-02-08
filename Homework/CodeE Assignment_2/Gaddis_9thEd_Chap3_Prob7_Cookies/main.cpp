/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:50 PM
 * Purpose:  Counting Calories
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short bagCkis,   //How many cookies in the bagCkis
          serving,   //How many servings in the bagCkis
          servCal;   //How much calories is in each servings
         
    short ckiesAte;
    
    float calAte;
    
    //Initialize or input i.e. set variable values
    bagCkis = 40;
    serving = 10; 
    servCal = 300;  //Each serving is 4 cookies
    
    //Map inputs -> outputs
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;
    cin >> ckiesAte;
    
    calAte = servCal / (bagCkis / serving) * ckiesAte;
    
    cout << "You consumed " << calAte << " calories.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}