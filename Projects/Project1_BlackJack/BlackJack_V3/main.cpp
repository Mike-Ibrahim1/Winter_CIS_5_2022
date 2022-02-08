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
	float money = 100.0f;
	float bet;
	int uI = 0;
	char plyInp, ply = 'n';
	bool c1 = false, c2 = false;
	string fCard = "";
	string name = "";
	unsigned short age;

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
	cout << "*| 1: The value for Aces is what the player decides.                    |*" << endl;
	cout << "*| 2. The value for Aces for the Dealer is always 11                    |*" << endl;
	cout << "*| 3: All face cards are worth 10 points (Jack, King, Queen)            |*" << endl;
	cout << "*| 4. The dealer is forced to draw a card if his value is 17 or less    |*" << endl;
	cout << "*| Prize Money                                                          |*" << endl;
	cout << "*| The Player will start with $100.00.                                  |*" << endl;
	cout << "*| If the player gets a BlackJack and the dealer does not, then the ... |*" << endl;
	cout << "*| ... player will receive 1.5x their initial bet.                      |*" << endl;
	cout << "*| The game is over once the player has no money left.                  |*" << endl;
	cout << "*|**********************************************************************|*" << endl;

	cout << "What is your name? " << endl;
	cin >> name;
	cout << "How old are you " << name << "?" << endl;
	cin >> age;
	if (age < 18) {
		cout << "Unfortunately, you are too young to play BlackJack. You can play in " << 18 - age << " years." << endl;
		return 0;
	} else {
		cout << "Welcome " << name << " let's begin!" << endl;
		cout << "Would you like to play BlackJack?" << endl;
		cin >> ply;
	}

	while (ply == 89 || ply == 121)
	{
		cout << setprecision(2) << fixed;
		cout << "How much would you like to bet with your $" << setw(4) << money << endl;
		cin >> bet;
		if (bet <= 0 || bet > money) {
			cout << "Invalid bet, you cannot play the game." << endl;
			return 0;
		} else {
			cout << "Bet of $" << setw(4) << bet << " is placed!" << endl;
			money -= bet;
		}
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
			cout << "What do you want your Ace for Card 1 to repesent? 11 or 1: ";
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
				cout << "Dealer drew a card" << endl;
				rCard1 = rand() % 12 + 1;	//Random Card for Dealer to pull if below 16
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
						cout << "What do you want your Ace for the Card to represent? 11 or 1: " << endl;
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
		if ((pCard1 == 10 && pCard2 == 11) || (pCard1 == 11 && pCard2 == 10)) {	//Check if player got BlackJack off the bat
			cout << "BlackJack! You win!" << endl;
			cout << "Dealer's Hand: " << dTotal << endl;
			cout << "Player's Hand: " << pTotal << endl;
			bet *= 2.5;
		} else if ((dCard1 == 10 && dCard2 == 11) || (dCard1 == 11 && dCard2 == 10)) {
			cout << "BlackJack! You Lost. Dealer Won!" << endl;
			cout << "Dealer's Hand: " << dTotal << endl;
			cout << "Player's Hand: " << pTotal << endl;
			bet *= 0;
		} else if (dTotal == pTotal) {
			cout << "There is a tie. Both dealer and player have to push. No money is lost." << endl;
			cout << "Dealer's Hand: " << dTotal << endl;
			cout << "Player's Hand: " << pTotal << endl;
		} else {
			if (pTotal > 21) {
				cout << "Player lost, value is: " << pTotal << endl;
				cout << "Dealer's Hand: " << dTotal << endl;
				bet *= 0;
			} else if (dTotal > 21) {
				cout << "Dealer lost, value is: " << dTotal << endl;
				cout << "Player's Hand: " << pTotal << endl;
				bet += bet;
			} else if (pTotal > 21 && dTotal > 21) {
				cout << "Player lost, value is: " << pTotal << endl;
				cout << "Dealer's Hand: " << dTotal << endl;
				bet *= 0;
			} else {
				if (pTotal > dTotal) {
					cout << "Player Won! Value is: " << pTotal << endl;
					cout << "Dealer's Hand: " << dTotal << endl;
					bet += bet;
				} else {
					cout << "Dealer Won! Value is: " << dTotal << endl;
					cout << "Player's Hand: " << pTotal << endl;
					bet *= 0;
				}
			}
		}

		money += bet;
		
		cout << "This is your current balance " << name << " $" << setw(4) << money << endl;
		cout << "Play again? Y/N" << endl;
		cin >> ply;
	}

	return 0;
}