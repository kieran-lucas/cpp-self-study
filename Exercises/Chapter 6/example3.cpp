#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int *ptrApples;
    ptrApples = new int;
    
    *ptrApples = 5;
    cout << "value at ptrApples: " << *ptrApples << endl;
    *ptrApples += 2;
    cout << "value at ptrApples: " << *ptrApples << endl;

    delete ptrApples;
    return 0;
}