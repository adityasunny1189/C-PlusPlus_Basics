#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
template <typename T>
class stack {
	T *data; 
	int nextIndex;
	int capacity;
public:
	stack(int startValue) {
	       data = new T[startValue];
       	       capacity = startValue;
	       nextIndex = 0;
	}
	void push(T num) {
		if(nextIndex == capacity) {
			T *newData = new T[capacity * 2];
			capacity *= 2;
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			delete [] data;
			data = newData;
			data[nextIndex] = num;
			nextIndex++;
		} else {
			data[nextIndex++] = num;
		}
	}

	bool isEmpty() {
		return (nextIndex == 0);
	}

	T pop() {
		if(!isEmpty()) {
			nextIndex--;
			return data[nextIndex];
		} else {
			cout << "Stack Empty" << endl;
			return 0;
		}
	}
	
	T top() {
		if(!isEmpty()) {
			return data[nextIndex - 1];
		} else {
			return 0;
		}
	}

	int size() {
		return nextIndex;
	}
};
int main() {
	stack<int> s1(5);
	stack<char> s2(2);
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	s1.push(60);
	cout << s1.size() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	s2.push('a');
	s2.push('b');
	s2.push('c');
	s2.push('d');
	s2.push('e');
	cout << s2.size() << endl;
	cout << s2.top() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.size() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
}

			
