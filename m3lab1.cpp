/*
CSC-134
M3LAB1
Mendez
3/05/2026
*/

#include <iostream>
using namespace std;

int main()
{
    int choices;
    
    cout << "Get Taco Bell after the club?" << endl;
    cout << "Type 1 for HECK YES or 2 for ew no thx: ";
    cin >> choices;

    if (1 == choices) {
        cout << "Get ready lets go!" << endl;
    }
    else if (2 == choices) {
        cout << "Fine, I'll go by myself" << endl;
    }
    else {
        cout << "silent treatment I see :(" << endl;
    }

    return 0;
}