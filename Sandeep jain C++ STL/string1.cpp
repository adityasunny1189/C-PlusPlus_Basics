#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main() {
  char str1[] = "This is a string";
  for(int i = 0; str1[i] != '\0'; i++)
  {
      int j = 0;
      int temp = i;
      char str2[10];
      while(str1[i] != ' ') {
        str2[j] = str1[i];
        i++;
        j++;
      }
      i = temp;
      // strrev(str2);
      str2[j] = '\0';
      for(int k = 0; str2[k] != '\0'; k++)
        cout << str2[k];
  }
  return 0;
}
