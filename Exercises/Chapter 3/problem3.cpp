#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b) {
        float p = (a + b + c) / 2;
        cout << fixed << setprecision(2) << pow(p*(p - a)*(p - b)*(p - c), 0.5) << endl;
    } else {
        cout << "This is not a valid triangle" << endl;
    }
    return 0;
}