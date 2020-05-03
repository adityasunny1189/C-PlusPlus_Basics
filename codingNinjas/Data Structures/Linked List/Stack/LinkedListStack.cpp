#include<iostream>
using namespace std;
template <typename T>
class Node {
public:
	T data;
	Node<T> *next;
	Node(T element) {
		this -> data = element;
		next = NULL;
	}
};

template <typename T>
class stack {
private:
	Node<T> *head;
	int len;
public:
	stack() {
		len = 0;
		head = NULL;
	}

	void push(T ele) {
		Node<T> *newNode = new Node<T>(ele);
		if(head == NULL) {
			head = newNode;
		} else {
			newNode -> next = head;
			head = newNode;
		}
		len++;
	}

	bool isEmpty() {
		return (head == NULL);
	}

	T pop() {
		if(head) {
			T ans = head -> data;
			Node<T> *temp = head;
			head = head -> next;
			delete temp;
			len--;
			return ans;
		}
		else {
			cout << "Stack empty" << endl;
			return 0;
		}
	}
	
	int size() {
		return len;
	}

	T top() {
		if(head) {
			return head -> data;
		} else {
			cout << "Stack empty" << endl;
			return 0;
		}
	}
};
int main() {
	stack<char> s1;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	s1.push('d');
	cout << s1.top() << endl;
	cout << s1.size() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
}
		
		 
