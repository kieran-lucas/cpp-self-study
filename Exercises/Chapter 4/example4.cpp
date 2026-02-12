#include <iostream>
using namespace std;
int sum(int lower, int upper = 9) {
    int total = 0;
    for ( ; lower <= upper; lower++ ) {
        total += lower;
    }
    return total;
}
int main() {
    int lowerLimit = 1;
    int upperLimit = 5;

    int total = sum (lowerLimit, upperLimit);
    cout<< "total is " << total << endl;
    total = sum(lowerLimit);
    cout << "Total is " << total << endl;
    return 0;
}