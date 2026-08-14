#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;

public:
    void input(10) {
        cin >> real >> img;
    }

    void show() {
        cout << real;
        if (img >= 0)
            cout << "+" << img << "i";
        else
            cout << img << "i";
    }
};

int main() {
    Complex c1, c2;

    c1.input();
    c2.input();

    c1.show();
    cout << endl;
    c2.show();
    cout << endl;

    return 0;
}