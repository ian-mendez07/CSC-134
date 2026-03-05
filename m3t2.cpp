/*
CSC-134
M3T2
Mendez
3/05/2026
*/

#include <iostream>
#include <cmath> //calls rand
#include <ctime> 
using namespace std;

int main()
{
    cout << "Lets roll!" << endl;
    int seed = time(0);
    //cout << "What's your lucky number? ";
    //cin >> seed;

    srand(seed);

    const int MAX = 6;
    int roll_1, roll_2, total;

    roll_1 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll_1 << endl;

    roll_2 = (rand() % MAX) + 1;
    cout << "Your roll was: " << roll_2 << endl;

    total = roll_1 + roll_2;
    cout << "Total roll is: " << total << endl;

    if (total == 7) {
        cout << "Lucky Seven, You Win!" << endl;
    }
    else if (total == 11){
        cout << "Eleven in a win!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes, You Lose!" << endl;
    }
    else if (total == 12) {
        cout << "Boxcars, You Lose!" << endl;
    }
    else {
        cout << "Your point is " << total << " but we'll do that later!" << endl;
    }

    return 0;
}