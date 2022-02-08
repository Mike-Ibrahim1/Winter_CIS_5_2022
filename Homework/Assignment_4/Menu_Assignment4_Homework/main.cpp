/* Block Comments - Only one to exist for documentation purposes
 * 
 * File:   main.cpp
 * Author: Mike Ibrahim
 * Created on January 24, 2022, 6:03 PM
 * Purpose: Menu for Homework Assignment 4 Code-E
 */

//System Level Libraries
#include <iostream> //Input-Output Library
#include <iomanip>  //Formatting Library
#include <math.h>
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
void prob8();
void prob9();
//Execution beings here!

int main(int argc, char** argv) {

    //Declare variables here
    short choice;
    do {
        cout << "----------------------------" << endl;
        cout << "Choose from the following Menu Items" << endl;
        cout << "[0] - Gaddis_9thEd_Chap5_Prob1_Sum" << endl;
        cout << "[1] - Gaddis_9thEd_Chap5_Prob7_PayInPennies" << endl;
        cout << "[2] - Gaddis_9thEd_Chap5_Prob13_MinMax" << endl;
        cout << "[3] - Gaddis_9thEd_Chap5_Prob22_Rectangle" << endl;
        cout << "[4] - Gaddis_9thEd_Chap5_Prob23_Pattern" << endl;
        cout << "[5] - Savitch_9thEd_Chap4_Prob1_LiterGallon" << endl;
        cout << "[6] - Savitch_9thEd_Chap4_Prob2_LiterGallonWith2Cars" << endl;
        cout << "[7] - Savitch_9thEd_Chap4_Prob4_InflationRate" << endl;
        cout << "[8] - Savitch_9thEd_Chap4_Prob5_InflationRateWith2Items" << endl;
        cout << "[9] - Savitch_9thEd_Chap4_Prob9_MaxNums" << endl;
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
            case 8:prob8();
                break;
            case 9:prob9();
                break;
            default:cout << "Exiting the Menu" << endl;

        }
    } while (choice >= 0 && choice <= 7);
    return 0;
}

void prob0() {
    short inp, sum;
    
    //Initialize or input i.e. set variable values
    cin >> inp;
    
    sum = 0;
    
    for(int i = 0; i <= inp; i++){
        sum += i;
    }
    
    cout << "Sum = " << sum;
    cout << endl;
}

void prob1() {
    //Declare Variables
    int inp;
    
    cin >> inp;
    
    if(inp >= 1){
    
    cout << fixed << setprecision(2);
    cout << "Pay = $" << setw(3) << ((pow(2, inp) - 1) * 0.01);
    
    }

    cout << endl;
}

void prob2() {
    short inp;
    short minInp, maxInp;
    
    minInp = 99;
    maxInp = 0;
    
    //Initialize or input i.e. set variable values
    do{
        cin >> inp;
        if(inp > maxInp && inp != -99)
            maxInp = inp;
        if(inp < minInp && inp != -99)
            minInp = inp;
    } while(inp != -99);
    
    cout << "Smallest number in the series is " << minInp << endl;
    cout << "Largest  number in the series is " << maxInp;

    cout << endl;
}

void prob3() {
    short nInp;
    char cInp;
    
    cin >> nInp >> cInp;
    
    for(int i = 0; i < nInp; i++){
        
        for(int j = 0; j < nInp; j++){
            cout << cInp;
        }
        if(i != nInp-1)
            cout << endl;
    }
    cout << endl;
}

void prob4() {
    short inp;
    
    cin >> inp;
    
    for(int i = 0; i < inp; i++){
        
        for(int j = 0; j <= i; j++){
            cout << "+";
        }
        
        cout << endl;
        cout << endl;
    }
    
    for(int i = 0; i < inp; i++){
        
        short temp;
        for(int j = inp; j > i; j--){
            temp = j;
            cout << "+";
        }
        
        if(temp != inp){
            cout << endl;
            cout << endl;
        }
    }

    cout << endl;
}

void prob5() {
    const float LIT2GAL = 0.264179f;    //Conversion for Liters to Gallons
    
    unsigned short nLitGas,         //Numbers of Liters of Gasoline
                   nMiles,          //Numbers of Miles Traveled
                   mpg;             //Miles Per Gallon
    char uI;
    bool again;
    
    //Initialize or input i.e. set variable values
    do{
        cout << "Enter number of liters of gasoline:" << endl;
        cin >> nLitGas;
        cout << endl;
        cout << "Enter number of miles traveled:" << endl;
        cin >> nMiles;
        cout << endl;
        cout << "miles per gallon:" << endl;
        cout << fixed << setprecision(2);
        cout << nMiles / (nLitGas * LIT2GAL) << endl;
        cout << "Again:" << endl;
        cin >> uI;
        if(uI == 'y'){
            again = true;
            cout << endl;
        } else again = false;
    } while(again == true);

    cout << endl;
}

void prob6() {
    const float LIT2GAL = 0.264179f;    //Conversion for Liters to Gallons
    
    unsigned short nLitGas,         //Numbers of Liters of Gasoline
                   nMiles;          //Numbers of Miles Traveled
    char uI;
    bool again;
    float mpg, car1, car2;
    
    
    //Initialize or input i.e. set variable values
    do{
        for(int i = 1; i <= 2; i++){
            cout << "Car " << i << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> nLitGas;
            cout << "Enter number of miles traveled:" << endl;
            cin >> nMiles;
            mpg = nMiles / (nLitGas * LIT2GAL);
            cout << fixed << setprecision(2);
            cout << "miles per gallon: " << setw(5) << mpg << endl;
            cout << endl;
            if(i==1)
                car1 = mpg;
            else
                car2 = mpg;
        }
        if(car1 > car2){
            cout << "Car 1 is more fuel efficient" << endl;
            cout << endl;
        } else{
            cout << "Car 2 is more fuel efficient" << endl;
            cout << endl;
        }
        
        cout << "Again:" << endl;
        cin >> uI;
        if(uI == 'y'){
            again = true;
            cout << endl;
        } else
            again = false;
            
    } while(again == true);
    cout << endl;
}

void prob7() {
    const unsigned short PERCENT = 100;
    
    float cPrice,   //Current Price 
          oPrice,   //Old Price 
          infRate;  //Inflation Inflation Rate 
          
    char uI;
    
    bool again;
    //Initialize or input i.e. set variable values
    do{
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> oPrice;
        infRate = (cPrice - oPrice) / oPrice;
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << setw(4) << infRate * PERCENT << "%" << endl;
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> uI;
        if(uI == 'y'){
            again = true;
            cout << endl;
        } else again = false;
        
    } while(again == true);
    cout << endl;
}

void prob8(){
    const unsigned short PERCENT = 100;

    float cPrice, //Current Price 
          oPrice, //Old Price 
          infRate; //Inflation Inflation Rate 
          
    char uI;
    
    bool again;
    //Initialize or input i.e. set variable values
    do{
        cout << "Enter current price:" << endl;
        cin >> cPrice;
        cout << "Enter year-ago price:" << endl;
        cin >> oPrice;
        infRate = (cPrice - oPrice) / oPrice;
        cout << fixed << setprecision(2);
        cout << "Inflation rate: " << setw(4) << infRate * PERCENT << "%" << endl;
        cout << endl;
        cout << "Price in one year: $" << setw(4) << (cPrice * (1+infRate)) << endl;
        cout << "Price in two year: $" << setw(4) <<  ((cPrice * (1+infRate)) * (1+infRate)) << endl;
        cout << endl;
        
        cout << "Again:" << endl;
        cin >> uI;
        if(uI == 'y'){
            again = true;
            cout << endl;
        } else again = false;
        
    } while(again == true);
    
    cout << endl;
}

void prob9(){
    float num1, num2, num3;
    
    //Initialize or input i.e. set variable values
    cout << "Enter first number:" << endl;
    cin >> num1;
    cout << endl;
    cout << "Enter Second number:" << endl;
    cin >> num2;
    cout << endl;
    cout << "Enter third number:" << endl;
    cin >> num3; 
    cout << endl;
    
    cout << "Largest number from two parameter function:" << endl;
    
    cout << (num1 > num2 ? num1 : num2) << endl;
    cout << endl;
    
    cout << "Largest number from three parameter function:" << endl;
    
    if(num1 > num2 && num1 > num3){
        cout << num1 << endl;
    } else if(num2 > num1 && num2 > num3){
        cout << num2 << endl;
    } else {
        cout << num3 << endl;
    }
    
    cout << endl;
}

