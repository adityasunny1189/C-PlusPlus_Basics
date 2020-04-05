// #include <bits/stdc++.h>
// using namespace std;
//
// int main()
// {
//     struct site
//     {
//         char name[] = "GeeksQuiz";
//         int no_of_pages = 200;
//     };
//
//     struct site *ptr;
//     cout << ptr->no_of_pages << " " << ptr->name <<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
 int var;  /*Suppose address of var is 2000 */

 void *ptr = &var;
 *ptr = 5;
 cout << var << " " << *ptr;

 return 0;
}
