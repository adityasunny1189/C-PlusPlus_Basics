#include<bits/stdc++.h>

using namespace std;

class complex {
private:
  int real;
  int imag;
public:
  void print() {
    cout << real << " + i" << imag << endl;
  }
  complex(int r, int i) {
    real = r;
    imag = i;
  }
};

int main() {
  // int rl,im;
  // cin >> rl >> im;
  complex c1(12, 13);
  c1.print();
  return 0;
}
