#include<iostream>
using namespace std;
void follPatt(string s)
{
   //Your code here
   int no_of_x = 0;
   int no_of_y = 0;
   for(int i = 0; s[i] != '\0'; i++) {
       if(s[i] == 'x' && no_of_y > 0) {
          if(no_of_y != no_of_x) {
            cout << no_of_y << " " << no_of_x << endl;
			cout << "Program" << endl;
            cout << 0 << endl;
            return;
		} else {
			no_of_x++;
		}
      }
	  else if(s[i] == 'x' && no_of_y <= no_of_x) {
	       no_of_x++;
	   }
       else if(s[i] == 'y') {
        no_of_y++;
       }
   }
   if(no_of_x == no_of_y)
        cout << 1;
    else {
        cout << 0;
    }
   cout<<endl;
}
int main() {
	char str[100];
	cin >> str;
	follPatt(str);
}
