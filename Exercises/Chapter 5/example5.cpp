#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int key) {
    int start = 0, end = size - 1;
    while (start <= end) {
        cout << start << " " << end << endl;
        int middle = (end + start) / 2;
        if (a[middle] == key) {
            return middle;
        } else if (a[middle] > key) {
            end = middle - 1;
        } else {
            start = middle + 1;
        }
    }
    return -1;
}
int main() {
    int array[100] = {1, 3, 4, 7, 10, 12, 15};
    int arraySize = 7;
    int searchKey;

    cout << "Enter the search key: ";
    cin >> searchKey;

    int pos = binarySearch(array, arraySize, searchKey);
    if (pos >= 0) {
        cout << searchKey << " is found at entry " << pos;
    } else {
        cout << searchKey << " is not found" ;
    }
    return 0;
}