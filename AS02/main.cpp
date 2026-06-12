#include <iostream>
using namespace std;

int main() {
    float mark;
    char grade;
    bool pass = true;

    cout << "Please enter the mark: ";
    cin >> mark;
    if (mark >= 80 && mark <= 100) {
        grade = 'A';
    } 
    else if (mark >= 70 && mark < 80) {
        grade = 'B';
    } 
    else if (mark >= 60 && mark < 70) {
        grade = 'C';
    } 
    else if (mark >= 50 && mark < 60) {
        grade = 'D';
    } 
    else if (mark < 50) {
        grade = 'F';
        pass = false;
    } else {
        cout << "Invalid Mark !!!" << endl;
    }

    cout << "Mark: " << mark << endl;
    cout << "Grade: " << grade << endl;

    if (pass) {
        cout << "Result: Pass" << endl;
    } 
    else {
        cout << "Result: Fail" << endl;
    }

    return 0;
}
