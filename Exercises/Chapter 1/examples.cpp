#include <iostream>
using namespace std;
int totalApples;
int main() {
    int numberOfBaskets = 5;
    int applePerBasket;

    cout << "Enter number apples per baskets: ";
    cin >> applePerBasket;

    totalApples = numberOfBaskets * applePerBasket;
    cout << "Number of apples is " << totalApples;
    return 0;
}
