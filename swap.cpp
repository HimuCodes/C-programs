#include <iostream>
using namespace std;
int main()
{
    int a,b;

    cout<< "Enter first number:";
    cin>>a;
    int temp = a;
    cout<< "Enter second number:";
    cin>>b;
    a = b;
    b = temp;
    std :: cout << a << endl
                << b;
}
