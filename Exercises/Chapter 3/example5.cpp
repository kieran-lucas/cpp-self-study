#include <iostream>
using namespace std;
int main() {
    int total = 0;
    int input;
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> input;
        total = total + input;
    
    } while (input != 0);
    cout << "The sum of the numbers you entered is " << total << endl;
    return 0;
}