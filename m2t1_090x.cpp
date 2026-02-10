// CSC 134
// M1Lab1 - The Apple Orchard
// Mendez
// 2/9/2026
// We're going to make the simplest possible
// "checkout" machine

#include <iostream>
using namespace std;

int main(){
    // apple sales program
    // variables are like mailboxes
    string first_name, last_name, full_name;
    string product = "trucks";
    double cost_each = 0.77; // twenty five cents, or $0.25
    double total_cost;

    cout << "Welcome to the " << product << " truck store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;


    

    return 0; // no errors
}