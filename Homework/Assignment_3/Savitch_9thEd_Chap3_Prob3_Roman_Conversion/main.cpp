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
    unsigned char n1000s, n100s, n10s, n1s;
    unsigned short arabicN;
    string romanN = "";
    
    //Declare Variables
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> arabicN;
    
    if(arabicN < 1000 || arabicN > 3000){
        cout << arabicN << " is Out of Range!";
        exit(1);
    }
    
    n1000s = arabicN/1000;         
    n100s = (arabicN-n1000s*1000)/100;
    n10s = arabicN % 100 / 10;
    n1s = arabicN % 10;
    
    
    //Display the outputs
    
    //Convert the 1000's place
    switch(n1000s){
        case 3:
            romanN += "M";
        case 2:
            romanN += "M";
        case 1: 
            romanN += "M";
    }
    
    //Output Roman Numerals 100's - Ternary Operator
    romanN += n100s == 9? "CM":
              n100s == 8? "DCCC":
              n100s == 7? "DCC":
              n100s == 6? "DC":
              n100s == 5? "D":
              n100s == 4? "CD":
              n100s == 3? "CCC":
              n100s == 2? "CC":
              n100s == 1? "C": "";
    
    //Output Roman Numerals 10's
    switch(n10s){
        case 1:
            romanN += "X";
            break;
        case 2:
            romanN += "XX";
            break;
        case 3:
            romanN += "XXX";
            break;
        case 4: romanN += "XL"; break;
        case 5: romanN += "L"; break;
        case 6: romanN += "LX"; break;
        case 7: romanN += "LXX"; break;
        case 8: romanN += "LXXX"; break;
        case 9: romanN += "XC"; break;
    }

    //Output Roman Numerals 1's
    switch (n1s) {
    case 1:
        romanN += "I";
        break;
    case 2:
        romanN += "II";
        break;
    case 3:
        romanN += "III";
        break;
    case 4: romanN += "IV"; break;
    case 5: romanN += "V"; break;
    case 6: romanN += "VI"; break;
    case 7: romanN += "VII"; break;
    case 8: romanN += "VIII"; break;
    case 9: romanN += "IX"; break;
    }
                  
    
    //Output the conversion
    cout << arabicN << " is equal to " << romanN;

    return 0;
}