#include<iostream>
using namespace std;
class complex {
	int real, img;
public:
	complex(int r, int i) : real(r), img(i) {}
	complex operator+(complex const &obj) {
		complex res;
		res.real = real + obj.real;
		res.img = img + obj.img;
		return res;
	}
	void print() {
		cout << "complex no is: " << real << " + i" << img << endl;
	}
};
int main() {
	complex c1(5, 6) , c2(5, 4);
	complex c3 = c1 + c2;
	c3.print();
}
