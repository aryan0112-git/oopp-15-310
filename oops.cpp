
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    
    string name;
    string branch;
    int rollNo;
    float marks[5];
    float totalMarks;
    float percentage;

public:

    void inputDetails() {
        
        cout << "        ENTER STUDENT DETAILS          \n";
        
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);
        
        cout << "Enter Branch: ";
        getline(cin, branch);
        
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        
        cout << "\nEnter marks for 5 subjects (out of 100 each):\n";
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }
void findSum()
{
totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
       
        percentage = (totalMarks / 500.0f) * 100.0f;
}
   
    void show(){
       
        cout << "             STUDENT REPORT             \n";
        
        cout << "Name:        " << name << "\n";
        cout << "Branch:      " << branch << "\n";
        cout << "Roll No:     " << rollNo << "\n";
        
        cout << "Total Marks: " << totalMarks << " / 500\n";
        cout << "Percentage:  " << percentage << "%\n";
        
    }
};


int main() {

    Student student1;

    student1.inputDetails();
    student1.findSum();
    student1.show();

    return 0;
}

 