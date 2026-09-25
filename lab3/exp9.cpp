#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    void input(int x = 0, int y = 0);
    void show();
};

void Number::input(int x, int y) {
    a = x;
    b = y;
}

void Number::show() {
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
}

int main() {
    Number n;

    n.input();
    n.show();

    return 0;
}