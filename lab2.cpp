#include <iostream>
using namespace std;
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    cout << "\nInitial Value = " << a << endl;
    callByValue(a);
    cout << "After Call by Value = " << a << endl;
    callByReference(a);
    cout << "After Call by Reference = " << a << endl;
    callByAddress(&a);
    cout << "After Call by Address = " << a << endl;

    return 0;
}