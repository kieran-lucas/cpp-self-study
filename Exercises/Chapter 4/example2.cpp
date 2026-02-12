#include <iostream>
using namespace std;
void staticVariableTest() {
    int x = 0;
    static int y = 0;
    cout << "x = " << x << ", y = " << y << endl;
    x++; y++;
}
int main() {
    staticVariableTest();
    staticVariableTest();
    staticVariableTest();
    staticVariableTest();
    
    return 0;

}