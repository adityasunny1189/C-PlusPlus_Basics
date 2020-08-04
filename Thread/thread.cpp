#include<iostream>
#include<thread>
using namespace std;
void fun() {
	cout << "In 1st function" << endl;
}

int main() {
	thread t1(fun);
	t1.join();
	return 0;
}
