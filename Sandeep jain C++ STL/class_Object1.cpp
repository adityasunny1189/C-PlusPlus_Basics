#include<iostream>
#include<string>
using namespace std;
class myClass {
public:
  string name;
};
int  main() {
  myClass student;
  cout << "Enter name: ";
  cin >> student.name;
  cout << "Welcome " << student.name << endl;
  return 0;
}
