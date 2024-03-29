/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on February 1, 2022, 11:00 PM
 * Purpose: Create File
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>  //Random Function
#include <ctime>    //Time Function
#include <fstream>  //Open File for Writing
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables (will not use global variables in this course)
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between 
//systems of units!

//Function Prototypes
void fillAry(int [], int);
void prntAry(int [], int, int);
void wrtFile(fstream &, int [], int);
void newAry(int [], int, int, int[], int &);

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 200; //Maximum Size of array
    int array[SIZE];    //Integer Array
    int brray[SIZE];    //Integer Array
    int bigger; //Elements that are bigger for the new array
    fstream out;
    
    //Initialize Variables
    int aSize = SIZE/2;  //Use half allocated array
    int bSize = 0;
    fillAry(array, aSize);
    char fileNm[] = "Array.dat";
    out.open(fileNm, ios::out);
    
    //Map the inputs/known to the outputs
    bigger = rand()%90+10;
    newAry(array, aSize, bigger, brray, bSize);
    
    //Display the outputs
    prntAry(array, aSize, 10);
    cout << "The new array has " << bSize << " elements bigger than " << bigger << endl;
    prntAry(brray, bSize, 10);
    wrtFile(out, array, aSize);
    
    //Close File
    out.close();
    //Exit the program
    return 0;
}

void fillAry(int a[], int n){
    for (int i = 0; i < n; i++){
        a[i] = rand()%90+10; //[10,99]
    }
}

void prntAry(int a[], int n, int perLine){
    cout << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
        if(i%perLine == (perLine - 1))
            cout << endl;
    }
    cout << endl;
}

void wrtFile(fstream &out, int a[], int n){
    for (int i = 0; i < n; i++){
        out << a[i] << endl;
    }
}

void newAry(int a[], int aSize, int n, int b[], int &bSize){
    bSize = 0;
    for (int i = 0; i < aSize; i++){
        if(a[i] > n)
            b[bSize++] = a[i];
    }
    
    cout << "HAHAHA " << bSize << endl;
}
