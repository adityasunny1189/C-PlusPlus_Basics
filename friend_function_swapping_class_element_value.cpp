#include<iostream>
using namespace std;
class first;
class second {
	int val1;
public:
	void getValue() {
		cout << "Enter value: " << endl;
		cin >> val1;
	}
	void showValue() {
		cout << "Value of element in class second is: " << val1 << endl;
	}
	friend void swap(first &, second &);
};
class first {
	int val2;
public:
	void getValue() {
		cout << "Enter value of element: " << endl;
		cin >> val2;
	}
	void show() {
		cout << "value of element in class first is: " << val2 << endl;
	}
	friend void swap(first &, second &);
};
void swap(first &f, second &s) {
	int temp = f.val2;
	f.val2 = s.val1;
	s.val1 = temp;
}
int main() {
	first f1;
	f1.getValue();
	f1.show();
	second s1;
	s1.getValue();
	s1.showValue();
	swap(f1, s1);
	f1.show();
	s1.showValue();
}
