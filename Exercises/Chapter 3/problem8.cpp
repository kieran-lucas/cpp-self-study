#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cin >> num;
    bool isPrime = true;
    if (num < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i < (int) pow(num, 0.5) + 1; i++) {
          if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << "Day la so nguyen to" << endl;
    } else {
        cout << "Day khong phai la so nguyen to" << endl;
    }
}