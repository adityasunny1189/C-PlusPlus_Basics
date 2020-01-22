#include<bits/stdc++.h>
using namespace std;
class A {
private:
  int n1;
  char ch;
  void privateFunction() {
    cout << "This is a private function" << endl;
  }
public:
  void getInput() {
    privateFunction();
    cout << "Enter a number: ";
    cin >> n1;
    cout << "Enter a character: ";
    cin >> ch;
  }
  int square();
};

inline int A :: square() {
  return n1 * n1;
}

int main() {
  A object1;
  object1.getInput();
  cout << "Square of the no is: " << object1.square() << endl;
  return 0;
}
