#include <iostream>
using namespace std;

int getMin(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int getMin(int a, int b, int c) {
    int d = getMin(a, b);
    if (c < d) {
        return c;
    } else {
        return d;
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << getMin(a, b, c) << endl;
    return 0;
}