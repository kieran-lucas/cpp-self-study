#include <iostream>
using namespace std;
int main() {
    float sum = 0;
    int subjects = 10;

    cout << "Enter the marks for " << subjects << " subjects: ";
    for (int count = 0; count < subjects; count ++) {
        float mark;
        cin >> mark;
        sum += mark;

    }
    cout << "Average mark = " << sum / subjects << endl;
    return 0;
}