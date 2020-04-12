#include<iostream>
using namespace std;
#include "testClass.cpp"

int main() {
	testStudent S1(98, 19);
	testStudent *S2 = new testStudent(89, 21);
	S1.printStudentDetails();
	S2 -> printStudentDetails();
}
