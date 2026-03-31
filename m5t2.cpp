/*
CSC 134
M5T2 - More Practice with Functions
Mendez
3/30/2026
*/
#include <iostream> 
using namespace std;

//given two numbers and prints them out
void printResult(int first, int second){
    cout << first << " ^2 = " << second << endl;
}

//given a number, return the square of it
int square(int number){
    int result;
    result = number * number;
    return result;
}

int main(){
    int count = 1;
    int result;
    //this version will be squares
    while (count <= 10){
        result = square(count);
        printResult(count, result);
        count++;
    }
}