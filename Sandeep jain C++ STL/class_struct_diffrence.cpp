#include<bits/stdc++.h>
using namespace std;
class one {
public:
  int x;
};
class two : public one{};
int main() {
  two t;
  t.x = 10;
  cout << t.x << endl;
  return 0;
}
