#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;

int fibonacci(int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return (fibonacci(n - 2) + fibonacci(n - 1));
}

int factorial(int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return (n * factorial(n - 1));
}
int main() {
  int n;
  cout<< "Enter value of n: "<<endl;
  cin>>n;
  // cout<< "Your name is: " << argv[1]<<endl;
  cout<< "factorial of n is: " << factorial(n)<<endl;
  cout<< "fibonaci of n is : " << fibonacci(n)<<endl;
  return 0;
}
