#include<iostream>
using namespace std;
#include "Node.cpp"

int main() {
    Node n1(20);
    Node n2(40);
    Node * head = &n1;
    n1.next = &n2;
    cout << n1.data << endl;
    cout << n2.data << endl;
    cout << head -> data << endl;
    cout << head -> next -> data << endl;
}