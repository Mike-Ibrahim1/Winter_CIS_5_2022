/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
bool linSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;
    fillAry(array,SIZE);
    
    //Display the outputs
    // prntAry(array,SIZE,10);
    if(linSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;
    
    //Exit stage right or left!
    return 0;
}

void fillAry(int a[], int size){
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
}
void prntAry(int a[], int size, int line){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
        if(i % line == line-1){
            cout << endl;
        }
    }
}
bool linSrch(int a[], int size, int val, int &index){
    for(int i =0; i < size; i++){
        if(a[i] == val){
            index = i;
            return true;
        }
    }
    return false;
}