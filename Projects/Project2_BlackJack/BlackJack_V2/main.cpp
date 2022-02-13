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
#include <vector>
using namespace std;

//Function Prototypes
void checkWin(int, int, int, int, int, int, float &);
int getCard();
void rules();
void initUser(fstream &, fstream &, string &, unsigned short &);
string getFCard();

int main(int argc, char** argv) {

	//Initialize Random Seed
	srand(static_cast<unsigned int>(time(0)));

	//Declare Variables
	const int SIZE = 11;										   //Max size for array 10 + 1 EOF
	unsigned short dCard1, dCard2, pCard1, pCard2, rCard1, rCard2; //Variable for Dealer Cards, Player Cards, and 2 random cards that will be pulled out for dealer to draw, and for player to her
	unsigned short dTotal, pTotal;								   //Calculates the total of all cards
	float money = 100.0f;										   //Initial Money the user starts with, in dollars ($)
	float bet;													   //How much the user wants to bet in dollars ($)
	int uI = 0;													   //User input asking player whether they want their ACE to represent a value of 11 or 1
	char plyInp, ply = 'n';										   //PlyInp is for player input, asking if the users want to HIT or STAND. Ply is to check if the user wants to play BlackJack or No
	bool c1 = false, c2 = false;								   //C1 is the check to see if the first card for the user is an ACE, C2 is the check to see if their second card is an ACE
	string name = "";											   //Users name
	unsigned short age;											   //Users Age
	fstream in, out;											   //File input and output

	vector<unsigned short> dCards;
	unsigned short pCards[10];

	//Initialize the values
	dCard1 = getCard();	//Dealer Card 1
	dCard2 = getCard();	//Dealer Card 2
	pCard1 = getCard();	//Player Card 1
	pCard2 = getCard();	//Player Card 1

	dCards.push_back(dCard1);
	dCards.push_back(dCard2);


	//Start playing the game
	rules();

	initUser(in, out, name, age);

	if (age < 18) {	//Age restriction
		cout << "Unfortunately, you are too young to play BlackJack. You can play in " << 18 - age << " years." << endl;
		return 0;
	} else { //Initial Welcoming
		cout << "Welcome " << name << " let's begin!" << endl;
		cout << "Would you like to play BlackJack?" << endl;
		cin >> ply;
	}

	while (ply == 89 || ply == 121) //If the user input is capital Y or lowercase Y
	{
		cout << setprecision(2) << fixed; //Set precision to output money
		cout << "How much would you like to bet with your $" << setw(4) << money << endl;
		cin >> bet;
		if (bet <= 0 || bet > money) { //If bet is an invalid money, a negative number or more money than they have
			cout << "Invalid bet, you cannot play the game." << endl;
			return 0;	//exit
		} else {
			cout << "Bet of $" << setw(4) << bet << " is placed!" << endl;
			money -= bet; //Take away the bet from their money
		}

		cout << "The Dealer's card that is shown: " << endl;	//Show one dealers card (FACE-UP)
		switch (dCard1) {
		case 10: cout << getFCard() << endl;
			break;
		case 11: cout << "Ace" << endl;
			break;
		default:
			cout << dCard1 << endl;
		}

		cout << "The value of the players cards: " << endl;

		if (pCard1 == 10) {			//Show Player Card 1
			cout << getFCard() << " and ";
		} else if (pCard1 == 11 || pCard1 == 1) {
			cout << "Ace and ";
			c1 = true;
		} else {
			cout << pCard1 << " and ";
		}

		if (pCard2 == 10) {			//Show Player Card 2
			cout << getFCard() << endl;
		} else if (pCard2 == 11 || pCard2 == 1) {
			cout << "Ace" << endl;
			c2 = true;
		} else {
			cout << pCard2 << endl;
		}

		if (c1) {					//If player's card 1 is an ACE, ask them what value they want for it
			cout << "What do you want your Ace for Card 1 to repesent? 11 or 1: ";
			cin >> uI;
			if (uI == 11 || uI == 1) {
				pCard1 = uI;
			}
		}
		if (c2) {					//If player's card 2 is an ACE, ask them what value they want for it
			cout << "What do you want your Ace for Card 2 to repesent? 11 or 1: ";
			cin >> uI;
			pCard2 = (uI == 1 || uI == 11) ? uI : 0;
		}

		//Calculate the totals
		dTotal = dCard1 + dCard2;
		pTotal = pCard1 + pCard2;

		if (dTotal <= 17) {		//If the dealer has a value 17 or less, then they are forced to draw a card
			do {
				cout << "Dealer drew a card" << endl;
				rCard1 = getCard();	//Random Card for Dealer to pull if below 16
				dTotal += rCard1;
			} while (dTotal <= 17);
		}

		if (pTotal < 21) {		//Allow the user to choose between HIT or STAND
			do {
				cout << "HIT or STAND? H/S: " << endl;
				cin >> plyInp;
				if (plyInp == 72 || plyInp == 104) {	//Hit (H or h)
					cout << "Player has choose to HIT:" << endl;
					rCard2 = getCard();	//Random Card for Player to pull
					if (rCard2 == 10) {			//If card is 10, pick a facecard
						cout << getFCard() << endl;
					} else if (rCard2 == 11 || rCard2 == 1) {	//If the value is an Ace then ask them what they want
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
				} else if (plyInp == 83 || plyInp == 115) {	//Stand (S or s)
					cout << "Player choose to STAND!" << endl;
				}
			} while (pTotal < 21 && (plyInp == 72 || plyInp == 104));	//Keep going as long as they want to HIT and their total is less than 21
		}

		cout << endl;
		checkWin(pCard1, pCard2, dCard1, dCard2, pTotal, dTotal, bet);

		money += bet;

		cout << "This is your current balance " << name << " $" << setw(4) << money << endl;
		cout << "Play again? Y/N" << endl;
		cin >> ply;
	}

	//Close out of the files
	in.close();
	out.close();

	return 0;
}

void rules() {
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
}

void initUser(fstream &in, fstream &out, string &name, unsigned short &age) {
	string data;	//To store in file information
	char user;		//For user to confirm if it's them or not
	bool check = true; //To stop the while loop asking the user if it's them
	int count = 0;	   //Makes sure we are only checking the name section in the file, and not the age
	in.open("user.dat"); //Open the file
	if (in.is_open()) {	 //Check if the file is open
		while (in.peek() != EOF && check) {	//While the next line is not "END OF FILE" and if the user hasn't confirmed it is them yet
			getline(in, data);				//Get the line and save it to data
			if (count % 2 == 0) {			//Check if the line is on a name
				cout << "Is this you?" << endl;
				cout << data << endl;
				cin >> user;
				if (user == 'y' || user == 'Y') {	//If the user confirms that this is them
					check = false;					//End the while loop
					name = data;					//Name is data which is used in the getline
					in >> age;						//Age is read from the file

					cout << "Name: " << name << endl;
					cout << "Age:  " << age << endl;
				}
			}
			count++;
		}

		if (name.empty()) {	//If the user never confirmed their name, then ask them for name and age
			cout << "What is your name? " << endl;
			cin >> name;
			cout << "How old are you " << name << "?" << endl;
			cin >> age;

			out.open("user.dat", ios::app); //Write the users name and age (new lines)
			out << name << "\n" << age << "\n";
		}
	}
}

int getCard() {
	return rand() % 12 + 1;
}

string getFCard() {
	unsigned short random;
	random = rand() % 3 + 1;	//Random to choose which 3 cards they have
	string fCard = "";
	switch (random) {	//Get Face Card
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
	return fCard;
}

void checkWin(int pCard1, int pCard2, int dCard1, int dCard2, int pTotal, int dTotal, float &bet) {
	if ((pCard1 == 10 && pCard2 == 11) || (pCard1 == 11 && pCard2 == 10)) {	//Check if player got BlackJack off the bat
		cout << "BlackJack! You win!" << endl;
		cout << "Dealer's Hand: " << dTotal << endl;
		cout << "Player's Hand: " << pTotal << endl;
		bet *= 2.5;
	} else if ((dCard1 == 10 && dCard2 == 11) || (dCard1 == 11 && dCard2 == 10)) { //Check if dealer got BlackJack off the bat
		cout << "BlackJack! You Lost. Dealer Won!" << endl;
		cout << "Dealer's Hand: " << dTotal << endl;
		cout << "Player's Hand: " << pTotal << endl;
		bet *= 0;
	} else if (dTotal == pTotal) {	//If both dealer and player have the same total (TIE) then it is a bust
		cout << "There is a tie. Both dealer and player have to push. No money is lost." << endl;
		cout << "Dealer's Hand: " << dTotal << endl;
		cout << "Player's Hand: " << pTotal << endl;
	} else {
		if (pTotal > 21) {	//If the player has more than 21, then they lost
			cout << "Player lost, value is: " << pTotal << endl;
			cout << "Dealer's Hand: " << dTotal << endl;
			bet *= 0;
		} else if (dTotal > 21 && pTotal < 21) {	//If the dealer is greater than 21 but player is less than 21
			cout << "Dealer lost, value is: " << dTotal << endl;
			cout << "Player's Hand: " << pTotal << endl;
			bet += bet;
		} else if (pTotal > 21 && dTotal > 21) {	//If both the dealer and player have greater than 21, then the dealer wins
			cout << "Player lost, value is: " << pTotal << endl;
			cout << "Dealer's Hand: " << dTotal << endl;
			bet *= 0;
		} else {
			if (pTotal > dTotal && pTotal < 21 && dTotal < 21) {					//If the player has more points than the dealer
				cout << "Player Won! Value is: " << pTotal << endl;
				cout << "Dealer's Hand: " << dTotal << endl;
				bet += bet;
			} else if (dTotal > pTotal && pTotal < 21 && dTotal < 21) {								//The dealer has more points than player
				cout << "Dealer Won! Value is: " << dTotal << endl;
				cout << "Player's Hand: " << pTotal << endl;
				bet *= 0;
			}
		}
	}
}