// CSC 134
// M3HW1 - Gold
// Jeovannie Mendez
// 03/09/2026

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    // Question 
    std::string answer_1;
    cout << "Hello! How's your day?" << endl;
    cin >> answer_1;
    if (answer_1 == "good"){
        cout << "That is good to hear!" << endl;
    }
    else if (answer_1 == "Bad"){
        cout << "Perhaps tomorrow will be good!" << endl;
    }
    else {
        cout << "Well... I hope it gets better :P" << endl;
    }
    // end of question 1

    //Question 2
    cout << endl;
    cout << "Question 2" << endl;

    int    num_meals;  //how many they buy
    double meal_price;
    double sub_total;   //price before tax and tips
    double tax_rate = 0.07;
    double tip_added;
    double tip_amount;
    double tax_amount;      //$ of the actual tax charged
    double total_price;     // subtotal,tip,tax
    std::string answer_2;
    
    //Get user input
    cout << "Welcome to the CSC134 restaurant." <<endl;
    cout << "Enter price of the meal: $";
    cin >> meal_price;
    cout << "Takeout OR Dining?: ";
    cin >> answer_2;
    if (answer_2 == "dining"){
        cout << "Dine-in tip: %15 added" << endl;
        tip_added = 0.15 * meal_price;
    }
    else{
        cout << "Order is takeout" << endl;
    }
    cout << endl;
    cout << "Tip amount? (min 0)? ";
    cin >> tip_amount;

    //Do calculation
    sub_total = meal_price + tip_added;
    tax_amount = sub_total * tax_rate; //this is much is added to the bill
    
    //add tax and tip
    total_price = sub_total + tip_amount + tax_amount;

    //Present the output with two decimals
    cout << setprecision(2) << fixed << "----------" << endl; // remmeber to import <iomanip>
    cout << "YOUR ORDER" << endl << "----------" << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "Total: \t\t\t$" << total_price << endl;
    // end of question 2

    // Question 
    cout << endl;
    cout << "Question 3" << endl;

    // end of question 3

    return 0;
}
