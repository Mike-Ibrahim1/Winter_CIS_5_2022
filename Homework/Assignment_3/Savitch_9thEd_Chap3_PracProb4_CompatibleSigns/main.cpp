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
    /**
     * FIRE (Aries, Leo, Sagittarius)
     * EARTH (Taurus, Virgo, Capricorn)
     * AIR (Gemini, Libra, Aquarius)
     * WATER (Cancer, Scorpio, Pisces)
    */
    //Declare Variables
    string s1, s2;
    
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> s1 >> s2;
    
    if(s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn"){        //EARTH (Taurus, Virgo, Capricorn)
        if(s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn"){
            cout << s1 << " and " << s2 << " are compatible Earth signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else if (s1 == "Aries" || s1 == "Leo" || s1 == "Sagittarius"){ //FIRE (Aries, Leo, Sagittarius)
        if(s2 == "Aries" || s2 == "Leo" || s2 == "Sagittarius"){
            cout << s1 << " and " << s2 << " are compatible Fire signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else if (s1 == "Gemini" || s1 == "Libra" || s1 == "Aquarius"){ //AIR (Gemini, Libra, Aquarius)
        if(s2 == "Gemini" || s2 == "Libra" || s2 == "Aquarius"){
            cout << s1 << " and " << s2 << " are compatible Air signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else {                                                        //WATER (Cancer, Scorpio, Pisces)
        if(s2 == "Cancer" || s2 == "Scorpio" || s2 == "Pisces"){
            cout << s1 << " and " << s2 << " are compatible Water signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    }
    //Exit stage right or left!
    return 0;
}