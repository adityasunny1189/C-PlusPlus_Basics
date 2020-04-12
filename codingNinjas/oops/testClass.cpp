class testStudent {
private:
	int marks;
	int age;
	const int roll;
public:
	testStudent() : roll(0) {
		cout << "Default Constructor Called" << endl;
	}
	testStudent(int marks) {
		this -> marks = marks;
	}
	testStudent(int marks, int age) {
		this -> age = age;
		this -> marks = marks;
	}
	void printStudentDetails() const {
		cout << "Marks: " << this -> marks << endl;
		cout << "Age: " << this -> age << endl;
	}
};
