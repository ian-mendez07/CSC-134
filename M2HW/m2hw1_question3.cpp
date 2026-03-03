/*
CSC 134
M2HW1 - Gold
Jeoavnnie Mendez 
03/02/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num_of_pizza, slice_per_pizza, guests, slices_total, eaten_slices, leftovers;
    //ask for how many/much of info
    cout << "How many pizzas are you ordering? ";
    cin >> num_of_pizza;
    cout << "How many slices of pizza? ";
    cin >> slice_per_pizza;
    cout << "How many guests are coming: ";
    cin >> guests;
    //calculate the leftover pizza
    eaten_slices = guests * 3;
    slices_total = num_of_pizza * slice_per_pizza;
    leftovers = slices_total - eaten_slices;
    //show leftovers number
    cout << "There are " << leftovers << " slice(s) of pizza left." << endl;

    return 0;
}