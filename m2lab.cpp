// CSC 134
// M2LAB
// Jeovannie Mendez
// 03/02/2026

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Formatting set all prices to 2 decimals places
    cout << setprecision(2) << fixed;

    double COST_PER_CUBIC_FOOT = 0.23;
    double CHARGE_PER_CUBIC_FOOT = 0.5;
    double length, width, height, volume, cost, charge, profit;
    //ask the measurements of crate
    cout << "Enter the dimensions of the crate in feet."<< endl;
    cout << "What is the length of the crate: ";
    cin >> length;
    cout << "What is the width of the create: ";
    cin >> width;
    cout << "What is the height of the create: ";
    cin >> height;

    volume = length * width * height;
    //calculate and display the amounts per cubic foot
    cost = COST_PER_CUBIC_FOOT * volume; 
    charge = CHARGE_PER_CUBIC_FOOT * volume;
    profit = charge - cost;
    
    cout << "Volume of the crate: " << volume << " cubic feet" << endl;
    cout << "Cost of the crate: $" << cost << endl;
    cout << "Charge of the crate: $" << charge << endl;
    cout << "Profit of the crate: $" << profit << endl;

    return 0;
}
