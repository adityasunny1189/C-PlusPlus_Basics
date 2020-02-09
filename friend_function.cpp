#include<iostream>
using namespace std;
class test {
	int no;
	int x;
	int y;
public:
	void getValue() {
		cout << "Enter 3 no's" << endl;
		cin >> no >> x >> y;
	}
	friend void printValue(test);
};
void printValue(test t) {
	cout << "Value of no is: " << t.no;
	cout << endl;
	cout << "Value of x and y is: " << t.x << " " << t.y << endl;
}
int main() {
	test t1;
	t1.getValue();
	printValue(t1);
}
