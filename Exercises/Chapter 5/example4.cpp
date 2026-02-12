#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int array[100] = {10, 3, 4, 7, 2, 15};
    int arraySize = 6;
    int searchKey;

    cout << "Enter th search key: ";
    cin >> searchKey;

    int pos = linearSearch(array, arraySize, searchKey);
    if (pos >= 0) {
        cout << searchKey << " is found at entry " << pos;

    } else {
        cout << searchKey << " is not found";
    }
    return 0;
}