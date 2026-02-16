/*
CSC-134
M2T2 - Receipt Calculator
Mendez
2/16/2026
Goal: a receipt that handles sales tax.
Assumption: Sales tax is 7%.
*/

#include <iostream>
using namespace std;
// if you don't use namespace, type std::cout everytime instead of cout (also cin)

int main() {
    //Declare all variables
    string meal_name = "Sandwich BLT";
    int num_meals;  //how many they buy
    double meal_price = 7.99;
    double sub_total;   //price before tax and tips
    double tax_rate = 0.07;
    double tip_amount;
    double tax_amount;      //$ of the actual tax charged
    double total_price;     // subtotal,tip,tax
    
    //Get user input
    cout << "Welcome to the CSC134 Deli." <<endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;

    //Do calculation
    sub_total = meal_price * num_meals;

    //Present the output
    cout << "YOUR ORDER" << endl << "----------" << endl;
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    return 0; // no errors
}