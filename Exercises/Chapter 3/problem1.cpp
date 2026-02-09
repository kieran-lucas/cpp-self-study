#include <iostream>
using namespace std;
int main() {
    int score;
    cin >> score;
    switch (score) {
        case 10:
            cout << "Excellent!" << endl; break;
        case 9:
        case 8:
            cout << "Good!" << endl; break;
        case 7:
        case 6:
        case 5:
            cout << "Average!" << endl; break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            cout << "Bad!" << endl; break;
        default:
            cout << "Invalid score!" << endl;
    }
    return 0;
}