#include<iostream>
using namespace std;
class second;
class first {
	int ele1;
public:
	void getValuef() {
		cout << "Enter value of element: " << endl;
		cin >> ele1;
	}
	friend void sumOfEle(first, second);
};
class second {
	int ele2;
public:
	void getValues() {
		cout << "Enter value of 2nd element: " << endl;
		cin >> ele2;
	}
	friend void sumOfEle(first, second);
};
void sumOfEle(first f, second s) {
	int sum = f.ele1 + s.ele2;
	cout << "Sum of elements is: " << sum;
}
int main() {
	first f1;
	f1.getValuef();
	second s1;
	s1.getValues();
	sumOfEle(f1, s1);
}
