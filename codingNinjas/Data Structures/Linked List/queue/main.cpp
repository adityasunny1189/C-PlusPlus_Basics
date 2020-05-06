#include<iostream>
using namespace std;
#include "queue.h"

int main() {
	Queue<int> q1(5);
	Queue<char> q2(5);
	q1.enqueue(2);
	q1.enqueue(4);
	q1.enqueue(6);
	q1.enqueue(8);
        q1.enqueue(10);
	q1.enqueue(12);
        q1.enqueue(14);
	cout << q1.Size() << endl;
	cout << q1.front() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.front() << endl;
	cout << q1.Size() << endl;
	q1.enqueue(16);
	cout << q1.Size() << endl;
	cout << "Char Queue" << endl;
	q2.enqueue('a');
	q2.enqueue('b');
	q2.enqueue('c');
	q2.enqueue('d');
	q2.enqueue('e');
	q2.enqueue('f');
	cout << q2.Size() << endl;
	cout << q2.front() << endl;
	cout << q2.dequeue() << endl;
	cout << q2.dequeue() << endl;
	cout << q2.Size() << endl;
}

