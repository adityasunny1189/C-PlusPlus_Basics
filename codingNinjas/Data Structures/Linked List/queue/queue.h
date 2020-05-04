template <typename T>
class Queue {
	T *data;
	int nextIndex;
	int firstIndex;
	int capacity;
	int size;
public:
	Queue(int capacity) {
		data = new T[capacity];
		this -> capacity = capacity;
		nextIndex = 0;
		firstIndex = -1;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return size;
	}

	void Equeue(T ele) {
	}

	T Dequeue() {
	}

	T top() {
	}
};


