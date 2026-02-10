// CSC 134
// M1Lab1 - The Apple Orchard
// Mendez
// 2/9/2026
// We're going to make the simplest possible
// "checkout" machine
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main(){
    // apple sales program
    // variables are like mailboxes
    string first_name, last_name, full_name;
    string product = "trucks";
    int amount_purchased;
    double cost_each = 50000.67; // twenty five cents, or $0.25
    double total_cost;

    // Greet the customer
    cout << "Welcome to the " << product << " truck store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;
     
    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // Calculate total
    total_cost = amount_purchased * cost_each;

    //Formatting set all prices to 2 decimals places
    cout << setprecision(2) << fixed;

    //show result
    cout << "For " << amount_purchased << " " << product;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors
}