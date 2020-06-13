#include<vector>
using namespace std;
class PriorityQueue {
	vector<int> pq;

public:
	int getSize() {
		return pq.size();
	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	int getMax() {
		if(isEmpty()) {
			return 0;
		}
		return pq[0];
	}

	void insert(int ele) {
		int childIndex = pq.size() - 1;
		pq.push_back(ele);
		while(childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;
			if(pq[childIndex] > pq[parentIndex]) {
				// swap
				int temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
			}
			childIndex = parentIndex;
		}
	}

	int removeMax() {
		if(pq.size() > 0) {
			int ans = pq[0];
			pq[0] = pq[pq.size() - 1];
			pq.pop_back();
			int parentIndex = 0;
			int leftChildIndex = 1;
			int rightChildIndex = 2;
			int maxIndex = (pq[leftChildIndex] > pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
			while(maxIndex < pq.size() && pq[parentIndex] < pq[maxIndex]) {
				int temp = pq[parentIndex];
				pq[parentIndex] = pq[maxIndex];
				pq[maxIndex] = temp;
				parentIndex = maxIndex;
				leftChildIndex = (2 * parentIndex) + 1;
				rightChildIndex = (2 * parentIndex) + 2;
				maxIndex = (pq[leftChildIndex] > pq[rightChildIndex]) ? leftChildIndex : rightChildIndex;
			}
			return ans;
		}
		return 0;
	}
};