class DynamicArray {
    int *arr;
    int nextIndex;
    int size;

    public:

    DynamicArray() {
        arr = new int[5];
        nextIndex = 0;
        size = 5;
    }

    void add(int data) {
        if(nextIndex == size) {
            int *newArray = new int[2 * size];
            for(int i = 0; i < size; i++) {
                newArray[i] = arr[i];
            }
            size *= 2;
            delete [] arr;
            arr = newArray;
        }
        arr[nextIndex] = data;
        nextIndex++;
    }

    int getValue(int index) const {
        if(index < nextIndex) {
            return arr[index];
        } else {
            return -1;
        }
    } 

    void add(int index, int data) {
        if(index < nextIndex) {
            arr[index] = data;
        } else if(index == nextIndex) {
            add(data);
        } else {
            return;
        }
    }

    DynamicArray(DynamicArray const &d) {
        this -> arr = new int[d.size];
        for(int i = 0; i < d.nextIndex; i++) {
            this -> arr[i] = d.arr[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> size = d.size;
    }

    void operator = (DynamicArray const &d) {
        this -> arr = new int[d.size];
        for(int i = 0; i < d.nextIndex; i++) {
            this -> arr[i] = d.arr[i];
        }
        this -> nextIndex = d.nextIndex;
        this -> size = d.size;
    }

    void print() const {
        for(int i = 0; i < nextIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};