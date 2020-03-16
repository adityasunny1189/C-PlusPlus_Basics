#include<stdio.h>
#include<stdlib.h>
int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr[0];
	int *ptr1 = &arr[3];
	printf("%x\t%x\n", ptr, ptr1);
	printf("%ld\n", ptr1 - ptr);
	return 0;
}
