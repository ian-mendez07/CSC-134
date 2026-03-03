/*
CSC 134
M2HW1 - Gold
Jeoavnnie Mendez 
03/02/2026
*/

#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main()
{
    // get full name info
    string first_name, last_name, full_name;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    
    // show bank info
    cout << "Hello " << full_name << endl;
    string account_num = "58359392";
    double balance = 0.00, deposit, withdrawal;
    cout << "Account Number: " << account_num << endl;
    cout << "Current Balance is : $" << balance << endl;
    cout << "Please enter deposit amount: $";
    cin >> deposit;
    cout << "Please enter withdrawal amount: $";
    cin >> withdrawal;

    //Formatting set all prices to 2 decimals places
    cout << setprecision(2) << fixed;

    // calculate balance   
    balance = balance + deposit - withdrawal;
    cout << "Your balance is now: $" << balance << endl;
    
    return 0;
}



