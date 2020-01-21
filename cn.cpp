#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n;
    cin >> n;
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n; j++) {
            cout << i;
         	if(i < n)
                i++;
        }
        cout << endl;
    }
}


