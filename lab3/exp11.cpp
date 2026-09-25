#include <iostream>
using namespace std;

inline int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b = 0) {
    return a - b;
}

double calculate(double a, double b) {
    return a + b;
}

double calculate(double a, double b, double c) {
    return a + b + c;
}

int main() {
    cout << "Addition: " << add(10, 5) << endl;
    cout << "Subtraction: " << subtract(10) << endl;
    cout << "Addition of 2 numbers: " << calculate(10.5, 5.5) << endl;
    cout << "Addition of 3 numbers: " << calculate(10.5, 5.5, 4.0) << endl;

    return 0;
}