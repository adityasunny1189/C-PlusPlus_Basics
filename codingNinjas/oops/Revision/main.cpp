#include<iostream>
using namespace std;
#include "revision.cpp"

int main() {
    Fraction f1;
    Fraction f2(10, 2);
    f2.Print();
    f1.Getter(20, 8);
    f1.Print();
}