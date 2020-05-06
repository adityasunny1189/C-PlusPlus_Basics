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
		size = 0;
	}

	int Size() {
		return size;
	}

	bool isEmpty() {
		return size == 0;
	}

	void enqueue(T ele) {
		if(size == capacity) {
			T *newArray = new T[2 * capacity];
			int j = 0;
			for(int i = firstIndex; i < capacity; i++) {
				newArray[j++] = data[i];
			}
			for(int i = 0; i < firstIndex; i++) {
				newArray[j++] = data[i];
			}
			firstIndex = 0;
			nextIndex = capacity;
			delete [] data;
			data = newArray;
			capacity *= 2;
		}
		if(firstIndex == -1) {
			firstIndex = 0;
		}
		data[nextIndex] = ele;
		nextIndex = (nextIndex + 1) % capacity;	
		size++;
	}

	T dequeue() {
		if(!isEmpty()) {
			size--;
			T ans = data[firstIndex];
			firstIndex = (firstIndex + 1) % capacity;
			return ans;
		} else {
			cout << "QUEUE EMPTY" << endl;
			return 0;
		}
	}

	T front() {
		if(!isEmpty()) {
			return data[firstIndex];
		} else {
			cout << "QUEUE EMPTY" << endl;
			return 0;
		}
	}
};


