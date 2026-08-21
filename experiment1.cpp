
#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;
    float marks;

public:
    void input() {
        cin >> rollno >> name >> marks;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}