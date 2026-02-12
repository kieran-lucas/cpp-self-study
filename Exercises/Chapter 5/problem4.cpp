#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < size - 1; i++) {
        for (int j = 1; j < size - 1; j++) {
            bool check = true;
            for (int m = i - 1; m < i + 2 && check; m++) {
                for (int n = j -1; n < j + 2; n++) {
                    if (m == i && n == j) continue;
                    if (arr[i][j] <= arr[m][n]) {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true) {
                for (int m = i - 1; m < i + 2; m++) {
                    for (int n = j -1; n < j + 2; n++) {
                        cout << arr[m][n] << " ";
                 }
                cout << endl;
            }
            }
        }
    }
    for (int i = 1; i < size - 1; i++) {
        for (int j = 1; j < size - 1; j++) {
            bool check = true;
            for (int m = i - 1; m < i + 2 && check; m++) {
                for (int n = j -1; n < j + 2; n++) {
                    if (m == i && n == j) continue;
                    if (arr[i][j] >= arr[m][n]) {
                        check = false;
                        break;
                    }
                }
            }
            if (check == true) {
                for (int m = i - 1; m < i + 2; m++) {
                    for (int n = j -1; n < j + 2; n++) {
                        cout << arr[m][n] << " ";
                 }
                cout << endl;
            }
            }
        }
    }
}