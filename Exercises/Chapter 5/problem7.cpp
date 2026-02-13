#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ds[100];
    cin.getline(ds, 100);
    int size = strlen(ds);
    int count = 0;
    for (int i = 1; i < size; i++) {
        if ((ds[i] == ' ') && (ds[i - 1] != ' ')) {
            count++;
        }
    }
    cout << count + 1 << endl;
}