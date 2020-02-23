#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int arr[] = {12, 4, 8, 20, 89};
	sort(arr, arr + 5);
	for(int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << endl;
	if(binary_search(arr, arr + 5, 10))
		cout << "Present" << endl;
	else
		cout << "Not Present" << endl;
}
