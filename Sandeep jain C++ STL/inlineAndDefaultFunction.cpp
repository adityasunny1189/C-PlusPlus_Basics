#include<bits/stdc++.h>
#include<string>
using namespace std;

inline int factorial(int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return (n * factorial(n - 1));
}

int print(int x, int y) {
  return x + y;
}

string print(string x, string y) {
  return x + y;
}

int main() {
  int no;
  string string1, string2;
  cout << "Enter Number: ";
  cin >> no;
  cout << "Factorial of " << no << " is: " << factorial(no) << endl;
  cout << "Enter 1st name: ";
  cin >> string1;
  cout << "Enter last name: ";
  cin >> string2;
  cout << print(string1, string2) << endl;
  int no1, no2;
  cout << "Enter no 1: ";
  cin >> no1;
  cout << "Enter no 2: ";
  cin >> no2;
  cout << print(no1, no2) << endl;
  return 0;
}
