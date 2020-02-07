// 1111
// 2222
// 3333
// 4444

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i <= n) {
// 		int j = 1;
// 		while(j <= n) {
// 			cout << i;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }


// 1234
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i <= n) {
// 		int j = 1;
// 		while(j <= n) {
// 			cout << j;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// 4321
// 4321
// 4321
// 4321

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i <= n) {
// 		int j = n;
// 		while(j > 0) {
// 			cout << j;
// 			j--;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }


// 1
// 12
// 123
// 1234

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i <= n) {
// 		int j = 1;
// 		while(j <= i) {
// 			cout << j;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }

// 1
// 23
// 345
// 4567

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin >> n;
// 	int i = 1;
// 	while(i <= n) {
// 		int j = 1;
// 		int count = i;
// 		while(j <= i) {
// 			cout << count;
// 			count++;
// 			j++;
// 		}
// 		cout << endl;
// 		i++;
// 	}
// }


// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int i = 1;
	int count = 1;
	while(i <= n) {
		int j = 1;
		while(j <= i) {
			cout << count;
			count++;
			j++;
		}
		i++;
		cout << endl;
	}
}
