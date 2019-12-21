#include<cstdio>
#include<iostream>
#include<string>
#include<limits>
#include<vector>
#include<sstream>

int main() {
  std::string sAge = "0";
  std::cout << "Enter your age: ";
  std::cin>>sAge;
  int nAge = std::stoi(sAge);
  if(nAge >= 6 && nAge < 17) {
    std::cout << "Go to grade 1-12" << std::endl;
  }
  else if(nAge == 5) {
    std::cout << "Go to kindergaretn" << std::endl;
  }
  else if(nAge >= 17) {
    std::cout << "Go to college" << std::endl;
  }
  else {
    std::cout << "Too young to go to school" << std::endl;
  }
  return 0;
}
