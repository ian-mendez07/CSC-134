/*
CSC 134
M4T1 - While
Mendez
03/09/2026
*/

#include <iostream>
using namespace std;

int main(){
    int count = 1;
    while (count <= 5){
        cout << "Hi"<< "\t" << count << endl;
        count++;
    }
    
    cout << endl;

    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;
    
    int num = MIN_NUMBER;

    cout << "Number Number Squared\n";
    cout << "------------------------\n";
    while (num <= MAX_NUMBER){
        cout << num << "\t\t" << (num*num)<< endl;
        num++;
    }

    return 0;
}