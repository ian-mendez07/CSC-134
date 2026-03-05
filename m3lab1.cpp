/*
CSC-134
M3LAB1
Mendez
3/05/2026
*/

#include <iostream>
using namescpace std;

int main()
{
    int choices;
    
    cout << "Get Taco Bell after the club?" << endl;
    cout << "Type HECK YES or ew no thx: ";
    cin >> choices;

    if ("HECK YES" == choices) {
        cout << "Get ready lets go!" << endl;
    }
    else if ("ew no thx" == choices) {
        cout << "Fine, I'll go by myself" << endl;
    }
    else {
        cout << "silent treatment I see :(" << endl;
    }

    return 0;
}