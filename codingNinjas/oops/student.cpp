class student {
private:
	int age;
	int rollNo;
public:
	student() {
		cout << "constructor with no argument called" << endl;
	}
	student(int age) {
		cout << "constructor with 1 argument called" << endl;
		this -> age = age;
	}
	student(int age, int rollNo) {
		cout << "constructor with 2 argument called" << endl;
		this -> age = age;
		this -> rollNo = rollNo;
	}
	void print() {
		cout << "Age: " << this -> age << " Roll no: " << this -> rollNo << endl;
	}
	int getValue() {
		return age;
	}
	void setValue(int a, int r) {
		age = a;
		rollNo = r;
	}
	~student() {
		cout << "Destructor called" << endl;
	}
};
