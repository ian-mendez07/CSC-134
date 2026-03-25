/*
CSC 134
M4HW1
Mendez
03/25/2026
*/

#include <iostream>
using namespace std;

int main() {

    int firstNum, answer;
    cout << "Enter a number from 1 to 12? " << endl;
    cin >> firstNum;

    for (int i=1; i <= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;
        }
    return 0;
    }