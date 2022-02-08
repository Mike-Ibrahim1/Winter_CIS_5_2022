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
    char inp1, inp2;        //P - paper : R - rock : S - scissors
    
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> inp1 >> inp2;
    
    if(inp1 == 'P' || inp1 == 'p'){
        
        if(inp2 == 'P' || inp2 == 'p'){
            cout << "Nobody wins.";
            
        } else if (inp2 == 'R' || inp2 == 'r'){
            cout << "Paper covers rock.";
            
        } else {
            cout << "Scissors cuts paper.";
        }
    }
    
    else if(inp1 == 'R' || inp1 == 'r'){
        if(inp2 == 'R' || inp2 == 'r'){
            cout << "Nobody wins.";
        } else if(inp2 == 'P' || inp2 == 'p'){
            cout << "Paper covers rock.";
        } else{
            cout << "Rock breaks scissors.";
        }
    }
    
    else{                                           //Input HAS to be scissors
        if(inp2 == 'S' || inp2 == 's'){
            cout << "Nobody wins.";
        } else if(inp2 == 'P' || inp2 == 'p'){
            cout << "Scissors cuts paper.";
        } else {
            cout << "Rock breaks scissors.";
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}