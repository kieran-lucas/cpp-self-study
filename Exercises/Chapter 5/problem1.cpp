#include <iostream>
using namespace std;
void selectionSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
        
    }
}
int main() {
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    int minNumber = array[0];
    int maxNumber = array[0];
    float sum = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < minNumber) {
            minNumber = array[i];
        } 
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
        sum += array[i];
    }
    cout << maxNumber << ", " << minNumber << ", " << sum/size << endl;
    selectionSort(array, size);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}