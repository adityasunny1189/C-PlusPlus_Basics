#include<vector>
using namespace std;
class priorityQueue {
	vector<int> pq;

public:
	priorityQueue() {

	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	int getSize() {
		return pq.size();
	}

	int getMin() {
		if(isEmpty()) {
			return pq[0];
		}
		return 0;
	}

	void insert(int ele) {
		pq.push_back(ele);
		int childIndex = pq.size() - 1;
		while(childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;
			if(pq.at(childIndex) < pq.at(parentIndex)) {
				int temp = pq.at(childIndex);
				pq.at(childIndex) = pq.at(parentIndex);
				pq.at(parentIndex) = temp;
			} else {
				break;
			}
			childIndex = parentIndex;
		}
	}

	int removeMin() {
		if(pq.size() >= 0) {
			int ans = pq[0];
			int lastIndex = pq.size() - 1;
			pq[0] = pq[lastIndex];
			pq.pop_back();
			int parentIndex = 0;
			int leftChildIndex = 1;
			int rightChildIndex = 2;
			int minIndex = (pq[leftChildIndex] > pq[rightChildIndex]) ? rightChildIndex : leftChildIndex;
			while((pq[parentIndex] > pq[minIndex]) && minIndex < pq.size()) {
				int temp = pq[parentIndex];
				pq[parentIndex] = min(pq[leftChildIndex], pq[rightChildIndex]);
				pq[minIndex] = temp;
				parentIndex = minIndex;
				leftChildIndex = (2 * parentIndex) + 1;
				rightChildIndex = (2 * parentIndex) + 2;
				minIndex = (pq[leftChildIndex] > pq[rightChildIndex]) ? rightChildIndex : leftChildIndex;
			} 
			return ans;
		}
		return 0;
	}
};