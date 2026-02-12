#include <iostream>
using namespace std;
void print(int x) {
    cout << "int: " << x << endl;
}
void print(double x) {
    cout << "double: " << x << endl;
}
void print(int x, int y) {
    cout << "pair: " << x << " " << y << endl;
}
int main() {
    print(1);
    print(10.5);
    print(1,2);
    return 0;
}