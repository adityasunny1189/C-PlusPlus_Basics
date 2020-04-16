#include<utility>
#include<iostream>
using namespace std;
int main() {
	pair <int, int> p1(10, 20);
	pair <int, string> p2(22, "GeeksforGeeks");
	cout << p1.first << " " << p1.second << endl;
	cout << p2.first << " " << p2.second << endl;
}
