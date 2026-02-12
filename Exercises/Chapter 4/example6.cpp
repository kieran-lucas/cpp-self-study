#include <iostream>
using namespace std;
unsigned long factorial (int n) {
    if (n <= 1) {
        return 1;
    } else {
        return (n * factorial(n - 1));
    }
}

int main() {
    int n = 5;
    cout << n << "! = " << factorial(n);
    return 0;
}