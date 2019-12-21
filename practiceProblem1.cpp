#include<cstdio>
#include<iostream>
#include<limits>
#include<string>
#include<vector>
#include<sstream>

int main() {
  // int Num1;
  double miles;
  std::string text = "Enter Miles: ";
  std::cout << text;
  std::cin >> miles;
  std::cout << miles << " Miles is " << miles * 1.6934 << " kilometers" << std::endl;
  return 0;
}
