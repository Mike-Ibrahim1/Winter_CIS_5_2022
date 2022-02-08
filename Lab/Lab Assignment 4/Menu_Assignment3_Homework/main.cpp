/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 19, 2022, 11:01 PM
 * Purpose: Menu for Homework Assignment 3 Code-E
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Function Prototypes
void prob0();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void prob7();
//Execution beings here!

int main(int argc, char** argv) {

    //Declare variables here
    short choice;
    do {
        cout << "----------------------------" << endl;
        cout << "Choose from the following Menu Items" << endl;
        cout << "[0] - Gaddis_9thEd_Chap4_Prob8_SortNames" << endl;
        cout << "[1] - Gaddis_9thEd_Chap4_Prob11_Books" << endl;
        cout << "[2] - Gaddis_9thEd_Chap4_Prob12_BankCharges" << endl;
        cout << "[3] - Gaddis_9thEd_Chap4_Prob14_Race" << endl;
        cout << "[4] - Gaddis_9thEd_Chap4_Prob23_ISP" << endl;
        cout << "[5] - Savitch_9thEd_Chap3_PracProb1_RockPaperScissors" << endl;
        cout << "[6] - Savitch_9thEd_Chap3_Prob3_Roman_Conversion" << endl;
        cout << "[7] - Savitch_9thEd_Chap3_PracProb4_CompatibleSigns" << endl;
        cout << "----------------------------" << endl;

        cin >> choice;

        switch (choice) {
            case 0:prob0();
                break;
            case 1:prob1();
                break;
            case 2:prob2();
                break;
            case 3:prob3();
                break;
            case 4:prob4();
                break;
            case 5:prob5();
                break;
            case 6:prob6();
                break;
            case 7:prob7();
                break;
            default:cout << "Exiting the Menu" << endl;

        }
    } while (choice >= 0 && choice <= 7);
    return 0;
}

void prob0() {
    string name1,
            name2,
            name3;

    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> name1;
    cin >> name2;
    cin >> name3;

    if (name1 < name2 && name1 < name3) { //---------------------------
        cout << name1 << endl; //Name1 is largest
        if (name2 < name3) {
            cout << name2 << endl; //Name2 is middle
            cout << name3;
        } else {
            cout << name3 << endl; //Name3 is last
            cout << name2;
        }

    } else if (name2 < name1 && name2 < name3) { //---------------------------
        cout << name2 << endl; //Name2 is largest
        if (name1 < name3) {
            cout << name1 << endl; //Name1 is middle
            cout << name3;
        } else {
            cout << name3 << endl; //Name3 is last
            cout << name1;
        }

    } else { //---------------------------
        cout << name3 << endl; //Name3 is largest
        if (name1 < name2) {
            cout << name1 << endl; //Name1 is middle
            cout << name2;
        } else {
            cout << name2 << endl; //Name2 is last
            cout << name1;
        }
    }
    cout << endl;
}

void prob1() {
    //Declare Variables
    short uInput, points;

    //Initialize or input i.e. set variable values
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> uInput;
    cout << "Books purchased =" << setw(3) << uInput << endl;

    if (uInput == 0)
        points = 0;
    else if (uInput == 1)
        points = 5;
    else if (uInput == 2)
        points = 15;
    else if (uInput == 3)
        points = 30;
    else
        points = 60;


    cout << "Points earned   =" << setw(3) << points;

    cout << endl;
}

void prob2() {
    short nChecks; //Number of checks

    float begBal, //Beginning balance ($)
            chkFee, //Check Fee ($)
            monFee, //Fee for the month ($)
            lowBal, //Low balance fee ($)
            newBal; //New Balance ($)
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> begBal >> nChecks;

    if (nChecks < 0)
        nChecks = 0;
    else if (nChecks < 20)
        chkFee = nChecks * 0.10f;
    else if (nChecks >= 20 && nChecks < 39)
        chkFee = nChecks * 0.08f;
    else if (nChecks >= 40 && nChecks < 59)
        chkFee = nChecks * 0.06f;
    else
        chkFee = nChecks * 0.04f;

    if (begBal < 0)
        cout << "This account is overdrawn!" << endl;

    monFee = 10.0f;

    if (begBal < 400)
        lowBal = 15.0f;

    newBal = begBal - chkFee - monFee - lowBal;


    cout << showpoint << std::fixed << setprecision(2);
    cout << "Balance     $ " << setw(8) << begBal << endl;
    cout << "Check Fee   $ " << setw(8) << chkFee << endl;
    cout << "Monthly Fee $ " << setw(8) << monFee << endl;
    cout << "Low Balance $ " << setw(8) << lowBal << endl;
    cout << "New Balance $ " << setw(8) << newBal;

    cout << endl;
}

void prob3() {
    string n1, n2, n3; //Names 1 through 3 
    short t1, t2, t3; //Times for 1 through 3

    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;
    cin >> n1 >> t1
            >> n2 >> t2
            >> n3 >> t3;

    if (t1 > 0 && t2 > 0 && t3 > 0) {
        if (t1 < t2 && t1 < t3) {
            cout << n1 << "\t" << setw(3) << t1 << endl;
            if (t2 < t3) {
                cout << n2 << "\t" << setw(3) << t2 << endl;
                cout << n3 << "\t" << setw(3) << t3;
            } else {
                cout << n3 << "\t" << setw(3) << t3 << endl;
                cout << n2 << "\t" << setw(3) << t2;
            }
        }

        if (t2 < t1 && t2 < t3) {
            cout << n2 << "\t" << setw(3) << t2 << endl;
            if (t1 < t3) {
                cout << n1 << "\t" << setw(3) << t1 << endl;
                cout << n3 << "\t" << setw(3) << t3;
            } else {
                cout << n3 << "\t" << setw(3) << t3 << endl;
                cout << n1 << "\t" << setw(3) << t1;
            }
        }

        if (t3 < t1 && t3 < t2) {
            cout << n3 << "\t" << setw(3) << t3 << endl;
            if (t1 < t2) {
                cout << n1 << "\t" << setw(3) << t1 << endl;
                cout << n2 << "\t" << setw(3) << t2;
            } else {
                cout << n2 << "\t" << setw(3) << t2 << endl;
                cout << n1 << "\t" << setw(3) << n1;
            }
        }

    }
    cout << endl;
}

void prob4() {
    char pckg;
    short hrs;
    float bill;

    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pckg >> hrs;

    if (hrs > 744)
        hrs = 0;

    switch (pckg) {
        case 'A':
            if (hrs > 10) {
                bill = 9.95f + (hrs - 10) * 2.0f;
                break;
            }
            bill = 9.95f;
            break;
        case 'B':
            if (hrs > 20) {
                bill = 14.95f + (hrs - 20) * 1.0f;
                break;
            }
            bill = 14.95;
            break;
        case 'C':
            bill = 19.95f;
            break;
        default:
            break;
    }

    cout << showpoint << fixed << setprecision(2);
    cout << "Bill = $" << setw(6) << bill;

    cout << endl;
}

void prob5() {
    char inp1, inp2; //P - paper : R - rock : S - scissors

    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> inp1 >> inp2;

    if (inp1 == 'P' || inp1 == 'p') {

        if (inp2 == 'P' || inp2 == 'p') {
            cout << "Nobody wins.";

        } else if (inp2 == 'R' || inp2 == 'r') {
            cout << "Paper covers rock.";

        } else {
            cout << "Scissors cuts paper.";
        }
    } else if (inp1 == 'R' || inp1 == 'r') {
        if (inp2 == 'R' || inp2 == 'r') {
            cout << "Nobody wins.";
        } else if (inp2 == 'P' || inp2 == 'p') {
            cout << "Paper covers rock.";
        } else {
            cout << "Rock breaks scissors.";
        }
    } else { //Input HAS to be scissors
        if (inp2 == 'S' || inp2 == 's') {
            cout << "Nobody wins.";
        } else if (inp2 == 'P' || inp2 == 'p') {
            cout << "Scissors cuts paper.";
        } else {
            cout << "Rock breaks scissors.";
        }
    }

    cout << endl;
}

void prob6() {
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
    cout << endl;
}

void prob7() {
    string s1, s2;

    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> s1 >> s2;

    if (s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn") { //EARTH (Taurus, Virgo, Capricorn)
        if (s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn") {
            cout << s1 << " and " << s2 << " are compatible Earth signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else if (s1 == "Aries" || s1 == "Leo" || s1 == "Sagittarius") { //FIRE (Aries, Leo, Sagittarius)
        if (s2 == "Aries" || s2 == "Leo" || s2 == "Sagittarius") {
            cout << s1 << " and " << s2 << " are compatible Fire signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else if (s1 == "Gemini" || s1 == "Libra" || s1 == "Aquarius") { //AIR (Gemini, Libra, Aquarius)
        if (s2 == "Gemini" || s2 == "Libra" || s2 == "Aquarius") {
            cout << s1 << " and " << s2 << " are compatible Air signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    } else { //WATER (Cancer, Scorpio, Pisces)
        if (s2 == "Cancer" || s2 == "Scorpio" || s2 == "Pisces") {
            cout << s1 << " and " << s2 << " are compatible Water signs.";
        } else {
            cout << s1 << " and " << s2 << " are not compatible signs.";
        }
    }
    cout << endl;
}


