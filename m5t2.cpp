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


int main(){
    int count = 1;
    int result;

    while (count <= 10){
        result = count * count;
        //cout << count << " ^2 = " << result << endl;
        printResult(count, result);
        count++;
    }
}