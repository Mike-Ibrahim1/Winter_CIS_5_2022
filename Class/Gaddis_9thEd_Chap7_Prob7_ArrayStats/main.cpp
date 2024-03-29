/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on February 1, 2022, 11:00 PM
 * Purpose: Read from a file
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
void prntAry(int [], int, int);
void rdFile(fstream &, int [], int &);
void stats(int [], int, int&, int&, int&, float&);

//Execution beings here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE = 200; //Maximum Size of array
    int array[SIZE];    //Integer Array
    fstream in;
    int lowest, highest, total;
    float average;
    
    //Initialize Variables
    int aSize = SIZE/2;  //Use half allocated array
    char fileNm[] = "Array.dat";
    in.open(fileNm, ios::in);
    rdFile(in, array, aSize);
    
    //Map the inputs/known to the outputs
    stats(array, aSize, lowest, highest, total, average);
    
    //Display the outputs
    cout << "The array lowest value = " << lowest << endl;
    cout << "The array highest value = " << highest << endl;
    cout << "The array total value = " << total << endl;
    cout << "The array average value = " << average << endl;
    prntAry(array, aSize, 10);
    
    //Close File
    in.close();
    //Exit the program
    return 0;
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

void rdFile(fstream &in, int a[], int &n){
    n=0;
    while(in >> a[n++]);
    n--;
}

void stats(int a[], int n, int &lw, int &hst, int &tot, float &avg){
    lw = hst = tot = a[0];
    for (int i = 1; i < n; i++){
        tot += a[i];
        if(lw > a[i])
            lw = a[i];
        if(hst < a[i])
            hst = a[i];
    }
    avg = 1.0f * tot/n;
}

