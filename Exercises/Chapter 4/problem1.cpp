#include <iostream>
using namespace std;
float average(int a, int b) {
        return (a + b) / 2.0;
    }
int main() {
    int a, b;
    cin >> a >> b;
    cout << average(a, b);
    return 0;
    
}