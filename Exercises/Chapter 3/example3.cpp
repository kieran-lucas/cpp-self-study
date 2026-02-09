#include <iostream>
using namespace std;
int main() {
    char grade;

    cout << "Enter your grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!\n"; break;

        case 'B':
            cout << "Great!\n"; break;
        case 'C':

        case 'D':
            cout << "Well done!\n"; break;
        case 'F':
            cout << "Sorry, you failed.\n"; break;
        default:
            cout << "Error! Invalid grade.\n";
    }
    return 0;

}