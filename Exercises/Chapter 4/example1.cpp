#include <iostream>
using namespace std;
int calculateArea(int rectangleLength, int rectangleWidth) {
    int area = rectangleLength * rectangleWidth;
    return area;
}
int main() {
    int length = 3;
    int width = 2;
    int area = calculateArea (length, width);
    cout << "The area is " << area;
    return 0;
}