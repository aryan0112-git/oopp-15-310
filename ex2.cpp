#include <iostream>
using namespace std;

void callByValue(int x) {
    x += 10;
    cout << x << endl;
}

void callByReference(int &x) {
    x += 10;
    cout << x << endl;
}

void callByAddress(int *x) {
    *x += 10;
    cout << *x << endl;
}

int main() {
    int a = 10;

    cout << "Original: " << a << endl;

    callByValue(a);
    cout << "After Value: " << a << endl;

    callByReference(a);
    cout << "After Reference: " << a << endl;

    callByAddress(&a);
    cout << "After Address: " << a << endl;

    return 0;
}