#include <iostream>
using namespace std;

void selectionSort(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[smallest]) {
                smallest = j;
            }
        
        }
        int temp = a[i];
        a[i] = a[smallest];
        a[smallest] = temp;
    }
}
int main() {
    int array[100], arraySize;

    cout << "Enter array size: ";
    cin >> arraySize;
    cout << "Enter the array: ";
    for (int i = 0; i < arraySize; i++) {
        cin >> array[i];
    }
    selectionSort(array, arraySize);

    cout << "Sorted array: \n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";

    }
}