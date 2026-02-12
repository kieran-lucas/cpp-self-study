#include <iostream>
using namespace std;
const int MAX_NAME_LENGTH = 100;
int main() {
    char name[MAX_NAME_LENGTH];
    cout << "What is your first name ? ";
    cin >> name;
    cout << "Hi " << name << "!";
    return 0;
}