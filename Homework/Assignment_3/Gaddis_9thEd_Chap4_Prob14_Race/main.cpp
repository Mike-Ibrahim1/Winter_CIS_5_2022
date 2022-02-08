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
    string n1, n2, n3;  //Names 1 through 3 
    short t1, t2, t3;   //Times for 1 through 3
    
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> n1 >> t1
        >> n2 >> t2
        >> n3 >> t3;
    
    if(t1 > 0 && t2 > 0 && t3 > 0){
        if(t1 < t2 && t1 < t3)
        {
            cout << n1 << "\t" << setw(3) << t1 << endl;
            if(t2 < t3){
                cout << n2 << "\t" << setw(3) <<  t2 << endl;
                cout << n3 << "\t" << setw(3) << t3;
            } else{
                cout << n3 << "\t" << setw(3) << t3 << endl;
                cout << n2 << "\t" << setw(3) << t2;
            }
        }
        
        if(t2 < t1 && t2 < t3){
            cout << n2 << "\t" << setw(3) << t2 << endl;
            if(t1 < t3){
                cout << n1 << "\t" << setw(3) << t1 << endl;
                cout << n3 << "\t" << setw(3) << t3;
            } else{
                cout << n3 << "\t" << setw(3) << t3 << endl;
                cout << n1 << "\t" << setw(3) << t1;
            }
        }
        
        if(t3 < t1 && t3 < t2){
            cout << n3 << "\t" << setw(3) << t3 << endl;
            if(t1 < t2){
                cout << n1 << "\t" << setw(3) << t1 << endl;
                cout << n2 << "\t" << setw(3) << t2;
            } else {
                cout << n2 << "\t" << setw(3) << t2 << endl;
                cout << n1 << "\t" << setw(3) << n1;
            }
        }
        
    }

    //Exit stage right or left!
    return 0;
}