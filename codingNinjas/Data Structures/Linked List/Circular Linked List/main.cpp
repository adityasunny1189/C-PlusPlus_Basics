#include<iostream>
using namespace std;
#include "NodeClass.cpp"

Node* takeInput() {
    Node *head = NULL;
    Node *tail = NULL;
    int ele;
    cin >> ele;
    while(ele != -1) {
        Node *newNode = new Node(ele);
        newNode -> next = head;
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
        cout << "Enter element: " << endl;
        cin >> ele;
    }
    return head;
}

void Print(Node *head) {
    Node *temp = head -> next;
    cout << head -> data << " ";
    while(temp != head) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *head = takeInput();
    Print(head);
}