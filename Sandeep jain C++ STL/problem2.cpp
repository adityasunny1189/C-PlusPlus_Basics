#include <iostream>
#include<string.h>
using namespace std;

int main() {
	//code

	int testcase;
  cout << "Enter: ";
	cin >> testcase;
	for(int i = 0 ; i < testcase; i++) {

	    char s1[1000];
	    char s2[1000];
	    char op1[1000];
	    char op2[1000];
	    int m = 0, n = 0;
      cout << "S1: ";
	    cin >> s1;
      cout << "S2: ";
	    cin >> s2;
	    int c1 = 0, c2 = 0;
	    for(int j = 0; j < strlen(s1);) {
	        if(isalpha(s1[j])) {
	            op1[j] = s1[j];
              m = j;
              m++;
	        }
	        else {
            m = j;
	            while(s1[m] == '#') {
	                c1++;
	                m++;
	            }
	            op1[j] = s1[m] + c1;
	        }
          j = m;
	    }

	    for(int k = 0; k < strlen(s2);) {

	        if(isalpha(s1[k])) {
	            op2[k] = s1[k];
              n = k;
              n++;
	        }
	        else {
            n = k;
	            while(s1[n] == '#') {
	                c2++;
	                n++;
	            }
	            op2[k] = s1[n] + c2;
	        }
          k = n;
	    }

	    if(strcmp(op1, op2)) {
	        cout << "YES" << endl;
	    }
	    else {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
