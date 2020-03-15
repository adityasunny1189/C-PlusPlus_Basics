#include <iostream>
using namespace std;
int main()
{
	cout << sizeof(float) << endl;
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout << ptr2 << " " << ptr1 << endl;
  cout<< ptr2 - ptr1;
  return 0;
}
