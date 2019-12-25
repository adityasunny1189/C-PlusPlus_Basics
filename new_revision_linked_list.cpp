#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
};

typedef struct Node NODE;

NODE *createNode() {
  return (NODE *)malloc(sizeof(NODE));
}

void insert(NODE **head, int data, int pos) {
  NODE *newNode = createNode(), *q, *p = *head;
  int k = 0;
  newNode->data = data;
  newNode->next = NULL;
  if(pos == 1) {
    newNode->next = p;
    *head = newNode;
  }
  else {
    while(k < pos && p != NULL) {
      k++;
      q = p;
      p = p->next;
    }
    if(p == NULL) {
      q->next = newNode;
    }
    else {
      q->next = newNode;
      newNode->next = p;
    }
  }
}

int deleteNode(NODE **head, int pos) {
  NODE *p = *head, *q;
  int k = 0;
  if(pos == 1) {
    k = p->data;
    *head = p->next;
    free(p);
    return k;
  }
  else {
    while(k < pos && p != NULL) {
      k++;
      q = p;
      p = p->next;
    }
    if(p == NULL) {
      return 0;
    }
    else {
      k = p->data;
      q->next = p->next;
      free(p);
      return k;
    }
  }
}

void display(NODE *head) {
  while(head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
}

int main() {
  NODE *head = NULL;
  int data, pos, choice;
  char ch;
  do {
    cout << "1.Insert\n2.Delete\n3.Display\nChoice: ";
    cin >> choice;
    switch(choice) {
      case 1: cout << "Enter data to insert: ";
              cin >> data;
              cout << "Enter position: ";
              cin >> pos;
              insert(&head, data, pos);
              break;

      case 2: cout << "Enter position of node to be deleted: ";
              cin >> pos;
              cout << "Deleted node is: " << deleteNode(&head, pos) << endl;
              break;

      case 3: cout << "List is: ";
              display(head);
              break;

      default: cout << "Invalid choice!" << endl;
    }
    cout << "Do you want to continue: ";
    cin >> ch;
  }while(ch == 'y');
  return 0;
}
