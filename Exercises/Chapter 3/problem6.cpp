#include <iostream>
using namespace std;
int main() {
    int count = 0;
    float total = 0;
    float mark = 1;
    while (mark != 0) {
        cout << "Enter mark: ";
        cin >> mark;
        if (mark < 0) {
            break;
        }
        total = total + mark;
        count++;
    }
    cout << "So luong sinh vien: " << count << endl;
    if (count != 0) {
        cout << "Diem trung binh: " << total / count << endl;
    }
    return 0;
}