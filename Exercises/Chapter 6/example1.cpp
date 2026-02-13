#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int apples = 9;
    cout << "apples: " << apples << endl;
    cout << "Address of apples: " << &apples << endl;

    int *ptrApples;
    ptrApples = &apples;

    cout << "ptrApples : " << ptrApples << endl;
    cout << "Value at ptrApple: " << *ptrApples << endl;

    apples ++;
    cout << "apples : " << apples << endl;
    cout << "Value at ptrApples: " << *ptrApples << endl;
    
    *ptrApples += 1;
    cout << "apples: " << apples << endl;
    cout << "Value at ptrApples: " << *ptrApples << endl;

    return 0;

}