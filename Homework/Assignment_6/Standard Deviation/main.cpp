/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    // print(test,SIZE,5);
    cout << setprecision(7) << fixed << showpoint;
    cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void init(float a[], int size){
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
}
void print (float a[], int size, int line){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
        if(i % line == line-1)
            cout << endl;
    }
}
float avgX(float a[], int size){
    float avg = 0.0;
    for(int i = 0; i < size; i++){
        avg += a[i];
    }
    avg /= size;
    return avg;
}
float stdX(float a[], int size){
    float std = 0.0;
    for(int i = 0; i < size; i++){
        std += pow(a[i] - avgX(a, size), 2);
    }
    std /= size-1;
    return sqrt(std);
    
}