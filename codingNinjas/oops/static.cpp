#include<iostream>
using namespace std;
#include "staticClass.cpp"

int main() {
	const student S3(79, 18, 105);
	S3.getValue();
	cout << student :: getClassStrength() << endl;
	student S1(98, 19, 101);
	S1.getValue();
	cout << student :: getClassStrength() << endl;
	student S2(102);
	S2.setValue(21, 98);
	S2.getValue();
	cout << student :: getClassStrength() << endl;
}
