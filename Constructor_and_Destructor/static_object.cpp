#include<iostream>
using namespace std;
class test {
	int no;
public:
	void printValue() {
		no++;
		cout << "No is: " << no << endl;
	}
};
void display() {
	static test t1, t2;
	t1.printValue();
	t2.printValue();
}
int main() {
	display();
	display();
}
