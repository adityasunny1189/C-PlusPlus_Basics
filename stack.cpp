#include<iostream>
#define size 10

using namespace std;

struct stack {
  int data[size];
  int top;
};

int isFull(struct stack *st) {
  if(st->top == size - 1)
    return 1;
  return 0;
}

int isEmpty(struct stack *st) {
  if(st->top == -1)
    return 1;
  return 0;
}

void push(struct stack *st, int ele) {
  if(isFull(st)) {
    cout << "Can't push in full stack" << endl;
    return;
  }
  st->data[++st->top] = ele;
}

int pop(struct stack *st) {
  if(isEmpty(st)) {
    cout << "Can't pop from empty stack" << endl;
    return 0;
  }
  return st->data[st->top--];
}

void display(struct stack st) {
  for(int i = 0; i <= st.top; i++)
    cout << st.data[i] << endl;
  cout << "\n";
}

int main() {
  struct stack st;
  st.top = -1;
  int choice,ele;
  char ch;
  do {
    /* code */
    cout << "1.Push Element\n2.Pop Element\n3.Display\nChoice: ";
    cin >> choice;
    switch(choice) {
      case 1: cout << "Enter no to push" << endl;
              cin >> ele;
              push(&st, ele);
              break;

      case 2: cout << "Deleted element is: " << pop(&st) << endl;
              break;

      case 3: cout << "Entered stack elements are " << endl;
              display(st);
              break;

      default: cout << "Invalid Choice" << endl;
    }
    cout << "Do you want to continue(y/n) : ";
    cin >> ch;
  } while(ch == 'y');
}
