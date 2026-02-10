#include <iostream>
using namespace  std;
int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score < 60) {
        cout << "Sorry. You've failed the course.\n";
    } else {
        cout << "congreatulations! You've passed the course.\n";

    }
    return 0;
    
}