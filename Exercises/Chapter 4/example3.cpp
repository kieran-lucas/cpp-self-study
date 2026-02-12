#include <iostream>
using namespace std;
void getStudent (int &id, int &mark) {
    cout << "Enter student's id and mark: ";
    cin >> id >> mark;
    return;
}
int main() {
    int id1, mark1;
    getStudent (id1, mark1);
    cout << "Student " << id1 << " gets mark " << mark1 << endl;
    int id2, mark2;
    getStudent (id2, mark2);
    cout << "Student " << id2 << " gets mark " << mark2 << endl;
    cout << "Total mark: " << (mark1 + mark2);
    return 0;
}