#include<iostream>
using namespace std;
class test {
public:
	test() {
		cout << "Constructor called" << endl;
	}
	~test() {
		cout << "Destructor called" << endl;
	}
};

int main() {
	test t1;
	{
		test t2;
	}
	test t3;
	{
		test t4;
		test t5;
	}
	return 0;
}
