#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string* arr = new string[n];
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].length() > arr[j + 1].length()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;

    }
    delete[] arr;
    return 0;
}