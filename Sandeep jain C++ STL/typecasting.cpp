#include<iostream>
using namespace std;
int main() {
  int x = 10, y =20;
  bool isBoolean = x < y;
  //C style typecasting
  double z = (double)x/y;

  //C++ style typecasting
  double m = static_cast<double>(x/y);
  cout << z << endl;
  cout << m << endl;
  cout << isBoolean << endl;
  return 0;
}
