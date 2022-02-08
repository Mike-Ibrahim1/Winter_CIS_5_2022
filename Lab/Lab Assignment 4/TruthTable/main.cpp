/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 16, 2022, 11:31 PM
 * Purpose: All Projects start by using the CPP Template
 *          It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream> //Input-Output Library
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
    bool x, y;
    
    //Heading
    cout << "X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y "
         << "!(X||Y) !X||!Y !(X&&Y)" << endl;
    
    //First Row
    x = y = true;
    
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x&&y ? 'T' : 'F') << "    ";
    cout << (x||y ? 'T' : 'F') << "   ";
    cout << (x^y ? 'T' : 'F') << "    ";
    cout << ((x^y)^x ? 'T' : 'F') << "     ";
    cout << ((x^y)^y ? 'T' : 'F') << "      ";
    cout << (!x&&!y ? 'T' : 'F') << "       ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << ((!x || !y) ? 'T' : 'F') << "      ";
    cout << (!(x&&y) ? 'T' : 'F');
    cout << endl;
    
    //Second Row
    y = false;
    
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x&&y ? 'T' : 'F') << "    ";
    cout << (x||y ? 'T' : 'F') << "   ";
    cout << (x^y ? 'T' : 'F') << "    ";
    cout << ((x^y)^x ? 'T' : 'F') << "     ";
    cout << ((x^y)^y ? 'T' : 'F') << "      ";
    cout << (!x&&!y ? 'T' : 'F') << "       ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << ((!x || !y) ? 'T' : 'F') << "      ";
    cout << (!(x&&y) ? 'T' : 'F');
    cout << endl;
    
    //Third Row
    x = false;
    y = true;
    
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x&&y ? 'T' : 'F') << "    ";
    cout << (x||y ? 'T' : 'F') << "   ";
    cout << (x^y ? 'T' : 'F') << "    ";
    cout << ((x^y)^x ? 'T' : 'F') << "     ";
    cout << ((x^y)^y ? 'T' : 'F') << "      ";
    cout << (!x&&!y ? 'T' : 'F') << "       ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << ((!x || !y) ? 'T' : 'F') << "      ";
    cout << (!(x&&y) ? 'T' : 'F');
    cout << endl;
    
    //Fourth Row
    y = false;
    
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x&&y ? 'T' : 'F') << "    ";
    cout << (x||y ? 'T' : 'F') << "   ";
    cout << (x^y ? 'T' : 'F') << "    ";
    cout << ((x^y)^x ? 'T' : 'F') << "     ";
    cout << ((x^y)^y ? 'T' : 'F') << "      ";
    cout << (!x&&!y ? 'T' : 'F') << "       ";
    cout << (!(x || y) ? 'T' : 'F') << "      ";
    cout << ((!x || !y) ? 'T' : 'F') << "      ";
    cout << (!(x&&y) ? 'T' : 'F');
    cout << endl;
    
    //Display the outputs
    
    //Exit the program
    return 0;
}

