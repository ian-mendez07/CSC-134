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

void question_1();
void question_2();
void question_3();
void question_4();
void question_5();


int main(){
    int question_choice = 0;
    while (question_choice !=6){
        cout << "1. Rainfall Average"<< endl;
        cout << "2. Block Volume"<< endl;
        cout << "3. Roman numerals"<< endl;
        cout << "4. Geometry Calculator"<< endl;
        cout << "5. Distance Traveled"<< endl;
        cout << "6. Quit"<< endl;
        cout << "Enter 1-6 for type of calculator: "<< endl;
        cin>> question_choice;

        if (question_choice==1){
            question_1();
        }
        else if (question_choice==2){
            question_2();
        }
        else if (question_choice==3){
            question_3();
        }
        else if (question_choice==4){
            question_4();
        }
        else if (question_choice==5){
            question_5();
        }
        else if (question_choice==6){
            cout << "Goodbye"<< endl;
        }
        else{
            cout << "Choices are 1 - 6"<<endl;
        }
    }
    return 0;
}


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

void question_4(){
    int area_choice;
    cout << "Geometry Calculator"<< endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> area_choice;
    if (area_choice == 1){
        double radius;
        cout << "Enter radius of circle: ";
        cin >> radius;
        if (radius > 0){
            cout << "The area of the circle is " << 3.14159*(radius*radius)<<endl;
        }
        else{
            cout << "Radius has to be more than 0"<< endl;
        }
    }
    else if(area_choice == 2){
        double length, width;
        cout << "What is length: ";
        cin >> length;
        cout << "What is width: ";
        cin >> width;
        if (length > 0 || width > 0){
            cout << "Area of Rectangle: "<< length*width <<endl;
        }
        else{
            cout << "Enter greater values"<< endl;
        }
    }
    else if (area_choice == 3){
        double base, height
        cout << "What is base: ";
        cin >> base;
        cout << "What is height: ";
        cin >> height;
        if (base > 0 || height > 0){
            cout << "Area of Rectangle: "<< base*height *0.5 <<endl;
        }
        else{
            cout << "Enter greater values" << endl;
        }
    }
    else if (area_choice == 4){
        cout << "Returning to menu" << endl;
    }
    else{
        cout << "Choices are 1-4" << endl;
    }



}

void question_5(){
    double speed;
    int time;
    cout << "What is the speed of the vehicle in MPH? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;

}