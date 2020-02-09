#include<iostream>
using namespace std;
class test {
	int x, y;
public:
	void print(int x, int y) {
		this->x = x;
		this->y = y;
		cout << "Using this pointer " << x << " " << y << endl;
	}
};

int main() {
	test t1, t2;
	t1.print(5, 9);
	t2.print(4, 5);
}
