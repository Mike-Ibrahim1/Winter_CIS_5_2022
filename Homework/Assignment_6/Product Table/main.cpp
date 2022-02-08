/* 
 * File:   main.cpp
 * Author: 
 * Created:
 * Purpose:  
 * 
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tblProd[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int mat[][COLS], int rows){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < COLS; j++){
            mat[i][j] = (i+1)*(j+1);
        }
    }
} 

void prntTbl(const int mat[][COLS], int rows){
    char row[5] = "ROWS";
    int count = 0;
    cout << "Think of this as a Product/Muliplication Table" << endl;
    cout << "           C o l u m n s" << endl;
    cout << "     |";
    for(int i = 0; i < rows; i++){
        cout << setw(4) << i+1;
    }
    cout << endl;
    cout << "----------------------------------" << endl;
    for(int i = 0; i < rows; i++){
        if(i>=1 && i<=4){
            cout << row[count] << setw(3) << i+1 << " ";
            count++;
        } else {
            cout << setw(4) << i+1 << " ";
        }
        cout << "|";
        for(int j = 0; j < COLS; j++){
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
}