#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double amount;
    double principal = 1000000;
    double interestRate = 0.12;

    cout << "Year\tAmout on deposit" << endl;
    cout << fixed << setprecision(2);
    for (int year = 1; year <= 5; year ++) {
        amount = principal * pow(1.0 + interestRate, year);
        cout << year << "\t" << amount << endl;

    }
    return 0;

}