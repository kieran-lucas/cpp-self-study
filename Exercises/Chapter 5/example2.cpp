#include <iostream>
using namespace std;

const int NUMBER_COURSES = 7;

void loadScore(int score[], int size) {
    for (int course = 0; course < size; course++) {
        cout << "Enter the score for course #" << course << ": ";
        cin >> score[course];

    }
}
float average(int score[], int size) {
    float sum = 0;
    for (int course = 0; course < size; course++) {
        sum += score[course];
    }
    return sum/size;
}
int main() {
    int score[NUMBER_COURSES];
    loadScore(score, NUMBER_COURSES);
    float averageScore = average(score, NUMBER_COURSES);
    cout << "The average score is " << averageScore;

    return 0;
}