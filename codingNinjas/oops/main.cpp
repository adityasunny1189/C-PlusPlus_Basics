#include<iostream>
using namespace std;
#include "student.cpp"

int main() {
	student s1(10);
	s1.print();
	student s2;
	s2.setValue(12, 104);
	student s3(20, 102);
	s2.print();
	s3.print();
}
