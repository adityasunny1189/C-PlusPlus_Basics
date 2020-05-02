#include<iostream>
#include<string>
using namespace std;
template <typename T>
class Pair {
	T x;
	T y;
public:
	Pair(T x, T y) {
		this -> x = x;
		this -> y = y;
	}
	void Print() {
		cout << this -> x << " " << this -> y << endl;
	}
};
int main() {
	Pair<int> p1(2, 5);
	Pair<float> p2(2.5, 4.9);
	Pair<char> p3('a', 'b');
	Pair<string> p4("Adity", "Pathak");
	p1.Print();
	p2.Print();
	p3.Print();
	p4.Print();
}
