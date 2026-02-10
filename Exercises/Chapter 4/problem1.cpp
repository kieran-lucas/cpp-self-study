#include <iostream>
using namespace std;
float avarage(int a, int b) {
        return (a + b) / 2.0;
    }
int main() {
    int a, b;
    cin >> a >> b;
    cout <<avarage(a, b);
    return 0;
    
}