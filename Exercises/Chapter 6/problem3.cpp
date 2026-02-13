#include <iostream>
using namespace std;

int main() {
    int *p1 = new int;
    int *p2;
    *p1 = 5;
    p2 = p1;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    *p2 = 10;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    p1 = new int;
    *p1 = 20;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
}