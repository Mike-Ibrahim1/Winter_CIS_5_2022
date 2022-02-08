/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  Binary Search
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
void bublSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout << endl;
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}


void fillAry(int a[], int size){
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
}
void bublSrt(int a[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
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
bool binSrch(int a[], int size, int val, int &index){
    for(int i =0; i < size; i++){
        if(a[i] == val){
            index = i;
            return true;
        }
    }
    return false;
}