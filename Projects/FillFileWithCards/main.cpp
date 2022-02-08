/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 9:28 PM
 * Purpose: Fill a File with cards
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <fstream>  //File Stream Library
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
    const char NCARDS = 52;
    char suit;
    char face;
    fstream out;
    
    //Initialize Variables
    out.open("cards.dat", ios::out);
    
    //Map the inputs/known to the outputs
    for(int i = 0; i < NCARDS; i++){
        switch(i/13){
            case 0: suit = 'S'; break;
            case 1: suit = 'D'; break;
            case 2: suit = 'C'; break;
            default: suit = 'H'; break;
        }
        char cmod = i % 13;
        face = cmod == 0? 'A':
               cmod == 1? '2':
               cmod == 2? '3':
               cmod == 3? '4':
               cmod == 4? '5':
               cmod == 5? '6':
               cmod == 6? '7':
               cmod == 7? '8':
               cmod == 8? '9':
               cmod == 9? 'T':
               cmod == 10? 'J':
               cmod == 11? 'Q': 'K';
        
        out << face << suit << endl;
        cout << face << suit << endl;
    }
    
    //Clean up files
    out.close();
    
    //Exit the program
    return 0;
}

