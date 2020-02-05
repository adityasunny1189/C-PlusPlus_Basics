#include<iostream>
using namespace std;
class demo {
private:
  static int one;
  // int two;
public:
  static int fun1() {
    one++;
  }
  static int disp() {
    cout << one;
  }
};

int demo::one = 0;

int main() {
  demo::disp();
  demo::fun1();
  demo::disp();
  demo::fun1();
  demo::disp();
  return 0;
}
