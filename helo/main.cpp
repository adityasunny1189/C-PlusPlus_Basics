#include<iostream>

using namespace std;

int main()
{
    int num1,num2;
    char op,ch;

    do
    {
        cout << "Enter No 1: ";
        cin>>num1;

        cout << "Enter No 2: ";
        cin>>num2;

        cout << "Enter operator: ";
        cin>>op;

        switch(op)
        {
            case '+' : cout << "Sum is: " << num1 + num2 << endl; break;
            case '-' : cout << "Dif is: " << num1 - num2 << endl; break;
            case '*' : cout << "Mul is: " << num1 * num2 << endl; break;
            case '/' : cout << "Div is: " << num1 / num2 << endl; break;
            default: cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue (y/n): ";
        cin>>ch;

    }while(ch == 'y');


    return 0;
}
