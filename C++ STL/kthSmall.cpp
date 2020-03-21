#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void sortArray(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        sortArray(arr, low, mid);
        sortArray(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}



int main() {
	//code
	int test_case;
	cin >> test_case;
	for(int i = 0; i < test_case; i++) {
	    int size;
	    cin >> size;
	    int *arr = new int[size];
	    for(int j = 0; j < size; j++) {
	        cin >> arr[j];
	    }
	    int pos;
	    cin >> pos;
	    sortArray(arr, 0, size - 1);
		for(int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	    cout << arr[pos - 1] << endl;
	}
	return 0;
}
