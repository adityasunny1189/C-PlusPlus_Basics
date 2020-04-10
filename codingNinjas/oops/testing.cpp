#include<iostream>
using namespace std;
class testStudent {
private:
	int marks;
	int age;
public:
	testStudent() {

	}
	testStudent(int marks) {
		this -> marks = marks;
	}
	testStudent(int marks, int age) {
		this -> age = age;
		this -> marks = marks;
	}
	void printStudentDetails() {
		cout << "Marks: " << this -> marks << endl;
		cout << "Age: " << this -> age << endl;
	}
};
int main() {
	testStudent S1(98, 19);
	testStudent *S2 = new testStudent(89, 21);
	S1.printStudentDetails();
	S2 -> printStudentDetails();
}
