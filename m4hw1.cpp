/*
CSC 134
M4HW1
Mendez
03/25/2026
*/

#include <iostream>
using namespace std;

int main() {

    int firstNum, secNum, answer;
    firstNum = 5;
    //secNum = 1;
   // answer = firstNum * secNum;

    for (int i=1; i <= 5; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " << answer << endl;

    }
}