#include<iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp -> data << "-->";
        temp = temp -> next;
    }
    cout << endl;
}

Node* insertNodeRec(Node *head, int i, int data) {
    if(i == 0) {
        Node *newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
        return head;
    }
    if(head != NULL) {
        Node *temp = insertNodeRec(head -> next, i - 1, data);
        head -> next = temp;
        return head;
    }  
}

//Finding the Length of Linked List Recursively
int Length(Node *head) {
    if(head -> next == NULL) {
        return 1;
    }
    int smallAns = Length(head -> next);
    return (1 + smallAns);
}

Node* takeInput() {
    int data;
    char choice;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "Do you want to insert data: ";
    cin >> choice;
    while(choice == 'y') {
        cout << "Enter data: ";
        cin >> data;
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = tail -> next;
        }
        cout << "Do you want to insert data: ";
        cin >> choice;
    }
    return head;
}

Node* insertNode(Node *head, int i, int data) {
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    if(i == 0) {
        newNode -> next = head;
        head = newNode;
        return head;
    }
    else {
        while(count < i - 1 && temp != NULL) {
            count++;
            temp = temp -> next;
        }
        if(temp != NULL) {
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }
    return head;
}

Node* deleteNode(Node *head, int i) {
    Node *temp = head;
    int count = 0;
    if(i == 0) {
        head = head -> next;
        delete(temp);
    }
    else {
        while(temp != NULL && count < i - 1) {
            count++;
            temp = temp -> next;
        }
        if(temp -> next != NULL) {
            Node *nextNode = temp -> next;
            temp -> next = nextNode -> next;
            delete(nextNode);
        }
    }
    return head;
}

int main() {
    // Node n1(20);
    // Node n2(40);
    // Node n3(30);
    // Node n4(98);
    // Node n5(67);
    // Node *head = &n1;
    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    //Part 2
    Node *head = takeInput();
    print(head);
    cout << "Length of Linked List: ";
    cout << Length(head) << endl;
    int i, data;
    cin >> i >> data;
    // head = insertNode(head, i, data);
    // print(head);
    // cout << "Length of Linked List: ";
    // cout << Length(head) << endl;
    // cin >> i >> data;
    // head = deleteNode(head, i);
    // print(head);
    // cout << "Length of Linked List: ";
    // cout << Length(head) << endl;
    head = insertNodeRec(head, i, data);
    print(head);
    cout << "Length of Linked List: ";
    cout << Length(head) << endl;
}