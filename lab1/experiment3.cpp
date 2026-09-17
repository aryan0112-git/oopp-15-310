#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    void input() {
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point p1, p2;

    p1.input();
    p1.show();

    p2.input();
    p2.show();

    return 0;
}