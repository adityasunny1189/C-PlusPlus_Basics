#include<iostream>

using namespace std;

struct node {
  int data;
  struct node *next;
};

typedef struct node NODE;

NODE *getnode() {
  return (NODE *)malloc(sizeof(NODE));
}

void insert(NODE *head, int pos, int ele) {
  NODE *newNode = getnode();
  if(!newNode) {
    cout << "Memory allocation error" << endl;
    return;
  }
  newNode->data = ele;
  if(pos == 1) {
    newNode->next = *head;
    *head = newNode;
  }
  else {
    NODE *q,*p = *head;
    int k = 0;
    while(k < pos && p != NULL) {
      q = p;
      p =p->next;
      k++;
    }
    q->next = newNode;
    newNode->next = p;
  }
}

void display(NODE *head) {
  NODE *temp = head;
  while(temp != NULL) {
    printf("%d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}
