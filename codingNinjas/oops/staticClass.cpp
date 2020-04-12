class student {
private:
	const int rollno;
	int marks;
	int age;
	static int classStrength;
public:
	student(int r) : rollno(r) {
		//Constructor Called with initializer list
		classStrength++;
	}
	student(int marks, int age, int roll) : marks(marks), age(age), rollno(roll) {
		//Parameterized Constructor called
		classStrength++;
	}
	void getValue() const {
		cout << "Age: " << this -> age << endl;
		cout << "Marks: " << this -> marks << endl;
		cout << "Rollno: " << this -> rollno << endl;
		// cout << "Current class strength: " << this -> classStrength << endl;
	}
	void setValue(int age, int marks) {
		this -> age = age;
		this -> marks = marks;
	}
	static int getClassStrength() {
		return classStrength;
	}
};

int student :: classStrength = 0;
