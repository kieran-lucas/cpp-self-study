#include <iostream>
using namespace std;

int main() {
    int apples = 0;
    int *ptrApp = &apples;
    int *ptrApp2 = ptrApp;
    apples += 2;
    *ptrApp --;
    *ptrApp2 += 3;
    cout << apples << endl;
    cout << *ptrApp << endl;
    cout << *ptrApp2 << endl;
    return 0;
}