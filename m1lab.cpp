// CSC 134
// M1LAB
// Jeovannie Mendez
// 02/02/2026

#include <iostream>
using namespace std;

int main() {
    // This program will simulate an apple orchard.
    // The owners name
    string name = "Jane Smith";
    // # of apples owned
    int apples = 100;
    // price per apple
    double pricePerApple = 0.25;

    // calculate the total price of the apples
    double totalPrice = apples * pricePerApple;

    // print all the information about the orchard
    cout << "Welcome to " << name;
    cout << "'s apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
    cout << "Total price of all apples is $" << totalPrice << endl;

}