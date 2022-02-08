/* 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 20, 2022, 11:10 PM
 * Purpose:  Homework Assignment 3 Code-E
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cstring>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,
           name2,
           name3;
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> name1;
    cin >> name2;
    cin >> name3;
    
    if(name1 < name2 && name1 < name3){         //---------------------------
        cout << name1 << endl;                      //Name1 is largest
        if(name2 < name3){
            cout << name2 << endl;                  //Name2 is middle
            cout << name3;
        }
        else{
            cout << name3 << endl;                  //Name3 is last
            cout << name2;
        }
        
    } else if(name2 < name1 && name2 < name3){  //---------------------------
        cout << name2 << endl;                      //Name2 is largest
        if(name1 < name3){
            cout << name1 << endl;                  //Name1 is middle
            cout << name3;
        }
        else{
            cout << name3 << endl;                  //Name3 is last
            cout << name1;
        }
        
    } else{                                     //---------------------------
        cout << name3 << endl;                      //Name3 is largest
        if(name1 < name2){
            cout << name1 << endl;                  //Name1 is middle
            cout << name2;
        }
        else{
            cout << name2 << endl;                   //Name2 is last
            cout << name1;
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}