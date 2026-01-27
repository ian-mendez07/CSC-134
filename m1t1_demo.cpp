/*
CSC 134
M1T1 - Hello, World
ianmendez
1/26/26
*/

  // magic words
#include <iostream>
using namespace std;
  
int main(){
  // greet the suer
  cout << "Hello, user!" << endl; // this is "endline"
  cout << "What is your name?" << endl;
  string name; // variable to hold name
  cin >> name; // get user input
  cout << "Nice to meet you, " << name << endl;
  
    return 0;
}