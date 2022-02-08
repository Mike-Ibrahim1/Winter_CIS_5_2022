/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(string [],string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int SIZE = 21;
    string key,answers,score;
    string fileKey[SIZE], fileAns[SIZE];
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(fileKey,key);
    read(fileAns,answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/20 * 100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print(const string &val){
    cout << val;
    cout << endl;
}
void read(string f[], string &write){
    for(int i = 0; i < 21; i++){
        cin >> f[i];
        if(f[i] == "A" || f[i] == "B" || f[i] == "C" || f[i] == "D"){
            write += f[i];
        }
    }
}
int compare(const string &key, const string &ans, string &score){
    int corr = 0;
    for(int i = 0; i < 20; i++){
        if(ans[i] == key[i]){
            score += "C ";
            corr++;
        } else {
            score += "W ";
        }
    }
    return corr;
}