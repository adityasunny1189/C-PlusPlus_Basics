class Stack {
    int *data;
    int capacity;
    int nextIndex;
public:
    Stack(int totalSize) {
        data = new int[totalSize];
        capacity = totalSize;
        nextIndex = 0;
    }

    bool isEmpty() {
        return (nextIndex == 0);
    }

    int size() {
        return nextIndex;
    }

    int top() {
        if(!isEmpty()) {
            return data[nextIndex - 1];
        }
        return -1;
    }

    void push(int element) {
        if(capacity == nextIndex) {
            cout << "Stack Full" << endl;
            return;
        } else {
            data[nextIndex] = element;
            nextIndex++;
        }
    }

    int pop() {
        if(!isEmpty()) {
            nextIndex--;
            return data[nextIndex];
        }
        return -1;
    }
};