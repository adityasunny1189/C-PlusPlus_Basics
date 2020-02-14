#include<iostream>
using namespace std;
class complex {
	int real, img;
public:
	complex() { }
	complex(int r, int i) : real(r), img(i) {}
	complex operator + (complex const &obj1) {
		complex res;
		res.real = real + obj1.real;
		res.img = obj1.img + img;
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
// #include<iostream>
// using namespace std;
// class number {
// public:
// 	int real, img;
// 	number() { }
// 	number(int x, int y) {
// 		real = x;
// 		img = y;
// 	}
// 	number operator + (number K) {
// 		number T;
// 		T.real = real + K.real;
// 		T.img = img + K.img;
// 		return T;
// 	}
// 	void show() {
// 		cout << "complex no is: " << real << " + i" << img << endl;
// 	}
// };
// int main() {
// 	number c1(5, 6) , c2(5, 4);
// 	number c3 = c1 + c2;
// 	c3.show();
// }
