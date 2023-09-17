//
// Created by himan on 16-09-2023.
//
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, temp;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}