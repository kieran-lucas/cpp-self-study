#include <iostream>
using namespace std;

void findPairs(int &a, int &b, const int &c = 13, const int &d = 25, const int &e = 35) {
    int arr[5] = {a, b, c, d, e};
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] + arr[j] == 50) {
                cout << "(" << arr[i] << ", " << arr[j] << "); ";
            }
        }
    }
}
int main() {
    int a, b;
    cin >> a >> b;
    findPairs(a, b);
    return 0;
}