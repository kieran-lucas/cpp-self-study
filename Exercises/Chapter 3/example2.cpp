#include <iostream>
using namespace std;
int main() {
    int score;
    char grade;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    cout << "grade = " << grade << endl;
    return 0; 

}