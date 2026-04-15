/*
CSC 134
M5HW1
Mendez
4/15/2026
*/

#include <iostream>
#include <iomanip>
#include <cmath> //calls rand
using namespace std;

void question_1() {
    int rain_1, rain_2, rain_3; 
    string month_1, month_2, month_3;
    cout << "Enter month: ";
    cin >> month_1;
    cout << "Enter rainfall for " << month_1 <<": ";
    cin >> rain_1;
    cout << "Enter month: ";
    cin >> month_2;
    cout << "Enter rainfall for " << month_2 <<": ";
    cin >> rain_2;
    cout << "Enter month: ";
    cin >> month_3;
    cout << "Enter rainfall for " << month_3 <<": ";
    cin >> rain_3;
    
    int rain_avg = (rain_1 + rain_2 + rain_3) / 3;
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for "<< month_1 <<", "<< month_2 << " and " << month_3 << " is " << rain_avg << endl;
}

void question_2(){
    double width, length, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;
    if (width,length,height <= 0){
        cout << "Invalid Validation" << endl;
    }
    else {
        double volume = width * length * height;
        cout << "Volume of block: "<< volume << endl;
    }
}

void question_3(){
    int number;
    cout << "Enter a number (1 - 10): ";
    cin << number;
    if (number < 1 || number > 10){
        cout << "Redo pls"<< endl;
    }
    else if (number == 1){
        cout << "The Roman numeral version of "<< number<<" is I."<< endl;
    }
    else if (number == 2){
        cout << "The Roman numeral version of "<< number<<" is II."<< endl;
    }
    else if (number == 3){
        cout << "The Roman numeral version of "<< number<<" is III."<< endl;
    }
    else if (number == 4){
        cout << "The Roman numeral version of "<< number<<" is IV."<< endl;
    }
    else if (number == 5){
        cout << "The Roman numeral version of "<< number<<" is V."<< endl;
    }
    else if (number == 6){
        cout << "The Roman numeral version of "<< number<<" is VI."<< endl;
    }
    else if (number == 7){
        cout << "The Roman numeral version of "<< number<<" is VII."<< endl;
    }
    else if (number == 8){
        cout << "The Roman numeral version of "<< number<<" is VIII."<< endl;
    }
    else if (number == 9){
        cout << "The Roman numeral version of "<< number<<" is IX."<< endl;
    }
    else if (number == 10){
        cout << "The Roman numeral version of "<< number<<" is X."<< endl;
    }
}


void question_4();
void question_5();
void question_6();
