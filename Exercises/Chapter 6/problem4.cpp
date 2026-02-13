#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int first = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % first == 0) {
            count++;
        }
    }
    cout << count << endl;
}