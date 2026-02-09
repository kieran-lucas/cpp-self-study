#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int MinNumber = a;
    int MaxNumber = a;
    if (b < MinNumber) {
        MinNumber = b;
    }
    if (c < MinNumber) {
        MinNumber = c;
    }
    if (b > MaxNumber) {
        MaxNumber = b;
    }
    if (c > MaxNumber) {
        MaxNumber = c;
    }
    cout << MinNumber + MaxNumber << endl;
    return 0;
}