#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double e = exp(1.0);
    int x;
    cin >> x;
    cout << pow(x, 0.5) << ", " << pow(e, x) << endl;
    return 0;
}