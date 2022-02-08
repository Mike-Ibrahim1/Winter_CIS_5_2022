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

//Function Prototypes

int main(int argc, char** argv) {

	//Initialize Random Seed
	srand(static_cast<unsigned int>(time(0)));

	//Declare Variables
	unsigned short dCard1, dCard2, pCard1, pCard2, rCard1, rCard2;
	unsigned short dTotal, pTotal;
	unsigned short random;
	int uI = 0;
	char plyInp;
	bool c1 = false, c2 = false;
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

	if (pCard1 == 10) {
		cout << fCard << " and ";
	} else if (pCard1 == 11 || pCard1 == 1) {
		cout << "Ace and ";
		c1 = true;
	} else {
		cout << pCard1 << " and ";
	}

	if (pCard2 == 10) {
		cout << fCard << endl;
	} else if (pCard2 == 11 || pCard2 == 1) {
		cout << "Ace" << endl;
		c2 = true;
	} else {
		cout << pCard2 << endl;
	}

	if (c1) {
		cout << "What do you want your Ace for Card 1 to represent? 11 or 1: ";
		cin >> uI;
		if (uI == 11 || uI == 1) {
			pCard1 = uI;
		}
	}
	if (c2) {
		cout << "What do you want your Ace for Card 2 to repesent? 11 or 1: ";
		cin >> uI;
		if (uI == 11 || uI == 1) {
			pCard2 = uI;
		}
	}

	dTotal = dCard1 + dCard2;
	pTotal = pCard1 + pCard2;

	if (dTotal <= 17) {
		do {
			cout << "Dealer drew a card since his value was " << dTotal << endl;
			rCard1 = rand() % 12 + 1;	//Random Card for Dealer to pull if below 16
			switch (rCard1) {
			case 10: cout << fCard << endl;
				break;
			case 11: cout << "Ace(11)";
				break;
			default:
				cout << rCard1 << endl;
			}
			dTotal += rCard1;
		} while (dTotal <= 17);
	}

	if (pTotal < 21) {
			do {
				cout << "HIT or STAND? H/S: " << endl;
				cin >> plyInp;
				if (plyInp == 72 || plyInp == 104) {	//Hit
					cout << "Player has choose to HIT:" << endl;
					rCard2 = rand() % 12 + 1;	//Random Card for Player to pull
					if (rCard2 == 10) {
						cout << fCard << endl;
					} else if (rCard2 == 11 || rCard2 == 1) {
						cout << "Ace" << endl;
						cout << "What do you want your Ace for the Card to repesent? 11 or 1: " << endl;
						cin >> uI;
						if (uI == 11 || uI == 1) {
							rCard2 = uI;
						}
					} else {
						cout << rCard2 << endl;
					}
					pTotal += rCard2;
				} else if (plyInp == 83 || plyInp == 115) {
					cout << "Player choose to STAND!" << endl;
				}
			} while (pTotal < 21 && (plyInp == 72 || plyInp == 104));
	}

	cout << endl;
	if ((pCard1 == 10 && pCard2 == 11) || (pCard1 == 11 && pCard2 == 10)) {
		cout << "BlackJack! You win!" << endl;
		cout << "Dealer's Hand: " << dTotal << endl;
		cout << "Player's Hand: " << pTotal << endl;
	} else if ((dCard1 == 10 && dCard2 == 11) || (dCard1 == 11 && dCard2 == 10)) {
		cout << "BlackJack! You Lost. Dealer Won!" << endl;
		cout << "Dealer's Hand: " << dTotal << endl;
		cout << "Player's Hand: " << pTotal << endl;
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
				cout << "Dealer's Hand: " << dTotal << endl;
			} else {
				cout << "Dealer Won! Value is: " << dTotal << endl;
				cout << "Player's Hand: " << pTotal << endl;
			}
		}
	}

	return 0;
}