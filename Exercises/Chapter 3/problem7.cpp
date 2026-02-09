#include <iostream> 
using namespace std;
int main() {
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 1; i < num; i += 2){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}