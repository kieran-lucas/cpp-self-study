#include <iostream>
using namespace std;
int main() {
    int count = 1;
    int number;
    cin >> number;
    while (count <= number) {
        cout << count << ", ";
        count++;
    }
}