#include<iostream>
using namespace std;
bool check(int n)
{
    int fibNo = 0;
    int fib1 = 0;
    int fib2 = 1;
    while(fibNo <= n)
    {
        if(fibNo == n)
            return true;
        else
        {
            fibNo = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibNo;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << check(n) << endl;
}
