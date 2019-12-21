#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

int main(int argc , char** argv) {
  std:: cout << "Hello World!" << std:: endl;
  if(argc != 1) {
    std:: cout << "No of arguments are " << argc << std:: endl;
  }
  for(int i = 0; i < argc ; i++) {
    std:: cout << argv[i] << std:: endl;
  }
  return 0;
}
