#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == 25) {
                    cout << "(" <<  arr[i] <<", " << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }
    return 0;
}