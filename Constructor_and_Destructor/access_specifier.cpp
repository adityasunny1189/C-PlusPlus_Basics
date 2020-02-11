#include<iostream>
using namespace std;
class Employee {
protected:
	int age, salary;
public:
	void getValue() {
		cout << "Enter Value: " << endl;
		cin >> age >> salary;
	}
	void putValue() {
		cout << "Entered Value is: " << age << " " << salary << endl;
	}
};
int main() {
	Employee no1, no2;
	no1.getValue();
	no1.putValue();
	no2.getValue();
	no2.putValue();
}
