#include <iostream>
using namespace std;
const int numArr = 100;
void displayResult(float& marks, int& cntPass, int& cntFail, int markNum);
float averageMarks(float marks[], int numMarks);

int main(){
    int numMarks{};
    int cntPass{};
    int cntFail{};
    float marks[numArr];
    
    do {
        cout << "How Many Mark Are You Going To Enter: ";
        cin >> numMarks;
        
        if (numMarks < 1 || numMarks > numArr) {
            cout << "Please Enter A Number Between 1 - " << numArr << endl;
        }

    } while (numMarks < 1 || numMarks > numArr) ;

    for (int i = 0; i < numMarks; i++){
        cout << "Mark " << i + 1 << ": " ;
        cin >> marks[i] ;
        displayResult(marks[i], cntPass, cntFail, i + 1);
    }
    float avgMarks = averageMarks(marks, numMarks);
    cout << "Average: " << avgMarks << endl;
    cout << "Total Passes: " << cntPass << endl;
    cout << "Total Failures: " << cntFail << endl;
    
    return 0;
}

void displayResult(float& mark, int& cntPass, int& cntFail, int markNum) {
    char grade{};
    bool isPass{};

    if (mark < 0 || mark > 100) {
        do {
            cout << "Please enter in the range of 0 - 100\n";
            cout << "Mark " << markNum << ": ";
            cin >> mark;
        } while (mark < 0 || mark > 100) ;
    }

    if (mark >= 50) {
        isPass = true;
        cntPass++;
    } else {
        isPass = false; 
        cntFail++;
    }

    if (mark >= 80) {
        grade = 'A';
    } else if (mark >= 70) {
        grade = 'B';
    } else if (mark >= 60) {
        grade = 'C';
    } else if (mark >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    if (isPass) {
        cout << "Result: Pass" << endl;
    } else {
        cout << "Result: Fail" << endl;
    }
    cout << endl;
}
float averageMarks(float marks[], int numMarks) {
    float total{};
    
    for (int i = 0; i < numMarks; i++) {
        total += marks[i];
    }

    return total / numMarks;
}