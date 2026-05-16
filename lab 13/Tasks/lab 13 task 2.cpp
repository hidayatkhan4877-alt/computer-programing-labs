#include <iostream>   // input/output library
using namespace std;  // standard namespace

// Student structure define kar rahe hain
struct Student {

    string name;   // student ka naam
    int age;       // student ki age
    char grade;    // student ka grade (A, B, C)
};

int main() {

    // student1 object banaya aur initialize kiya
    Student student1 = {"Sara", 19, 'A'};

    // output start
    cout << "Student Details:" << endl;

    // name print kar rahe hain dot operator se
    cout << "Name: " << student1.name << endl;

    // age print kar rahe hain
    cout << "Age: " << student1.age << endl;

    // grade print kar rahe hain
    cout << "Grade: " << student1.grade << endl;

    return 0; // program end
}