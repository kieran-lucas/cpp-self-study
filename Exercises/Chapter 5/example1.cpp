#include <iostream>
using namespace std;
const int NUMBER_COURSES = 7;
int main() {
    int score [NUMBER_COURSES];
    float sum = 0;
    
    for (int course = 0; course < NUMBER_COURSES; course++) {
        cout << "Enter the score for course #" << course << ": ";
        cin >> score[course];
        sum = sum + score[course];

    }
    cout << "The average score is " << sum/NUMBER_COURSES;

    return 0;

}