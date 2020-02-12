#include<iostream>
using namespace std;
class Employee {
	string name;
	int age, salary;
public:
	Employee() {
		name = "Adi by Default";
		age = 19;
		salary = 20000;
	}
	Employee(string name, int age, int salary) {
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	Employee(string name, int age) {
		this->name = name;
		this->age = age;
		salary = 50000;
	}
	void printDetails() {
		cout << "Employee name: " << name << endl;
		cout << "Employee age: " << age << endl;
		cout << "Employee salary: " << salary << endl;
 	}
};
int main() {
	Employee n1;
	n1.printDetails();
	Employee n2("Aditya", 20, 12000);
	n2.printDetails();
	Employee n3("Aditya pathak", 18);
	n3.printDetails();
}
