/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 4, 2022, 10:54 PM
 * Purpose: All Projects start by using the CPP Template
 *          It shows where to place/code your projects
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>	//Formatting Library
#include <cmath>	//Math Functions
#include <cstdlib>	//Random Function Library
#include <fstream>	//File Library
#include <string>	//String Library
#include <ctime>	//Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare Variables
    unsigned short dCard1, dCard2, pCard1, pCard2;
    unsigned short dTotal, pTotal;
    unsigned short random;
    string fCard = "";

    //Initialize the values
    dCard1 = rand() % 12 + 1;	//Dealer Card 1
    dCard2 = rand() % 12 + 1;	//Dealer Card 2
    pCard1 = rand() % 12 + 1;	//Player Card 1
    pCard2 = rand() % 12 + 1;	//Player Card 1
    random = rand() % 3 + 1;	//Random to choose which 3 cards they have

    //Start playing the game
    cout << "*|**********************************************************************|*" << endl;
    cout << "*|*************************Welcome to BlackJack*************************|*" << endl;
    cout << "*| Rules                                                                |*" << endl;
    cout << "*| 1: The value for Aces is only 11 points.                             |*" << endl;
    cout << "*| 2: All face cards are worth 10 points (Jack, King, Queen)            |*" << endl;
    cout << "*|**********************************************************************|*" << endl;

    switch (random) {
    case 1:
            fCard = "Jack";
            break;
    case 2:
            fCard = "Queen";
            break;
    case 3:
            fCard = "King";
            break;
    }

    cout << "The value of the dealers cards: " << endl;

    switch (dCard1) {
    case 10: cout << fCard << " and ";
            break;
    case 11: cout << "Ace and ";
            break;
    default:
            cout << dCard1 << " and ";
    }

    switch (dCard2) {
    case 10: cout << fCard << endl;
            break;
    case 11: cout << "Ace" << endl;
            break;
    default:
            cout << dCard2 << endl;
    }

    cout << "The value of the players cards: " << endl;
    switch (pCard1) {
    case 10: cout << fCard << " and ";
            break;
    case 11: cout << "Ace (11) and ";
            break;
    default:
            cout << pCard1 << " and ";
    }

    switch (pCard2) {
    case 10: cout << fCard << endl;
            break;
    case 11: cout << "Ace" << endl;
            break;
    default:
            cout << pCard2 << endl;
    }

    dTotal = dCard1 + dCard2;
    pTotal = pCard1 + pCard2;

    if ((pCard1 == 10 && pCard2 == 11) || (pCard1 == 11 && pCard2 == 10)) {
            cout << "BlackJack! You win!" << endl;
    } else if ((dCard1 == 10 && dCard2 == 11) || (dCard1 == 11 && dCard2 == 10)) {
            cout << "BlackJack! You Lost. Dealer Won!" << endl;
    } else {
            if (pTotal > 21) {
                    cout << "Player lost, value is: " << pTotal << endl;
                    cout << "Dealer's Hand: " << dTotal << endl;
            } else if (dTotal > 21) {
                    cout << "Dealer lost, value is: " << dTotal << endl;
                    cout << "Player's Hand: " << pTotal << endl;
            } else {
                    if (pTotal > dTotal) {
                            cout << "Player Won! Value is: " << pTotal << endl;
                    } else {
                            cout << "Dealer Won! Value is: " << dTotal << endl;
                    }
            }
    }

    return 0;
}

