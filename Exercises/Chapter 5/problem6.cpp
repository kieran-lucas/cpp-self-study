#include <iostream>
#include <cstring>
using namespace std;

int main() {
char ds[100][30];
int size;
cin >> size;
cin.ignore();
for (int i = 0; i < size; i++) {
    cin.getline(ds[i], 30);

}
int count = 0;
for (int i = 0; i < size; i++) {
    char c = ds[i][0];
    if (c == 'T' || c == 'C' || c == 'V' || c == 'A' || c == 'Q') {
        count++;
    }

}
cout << count << endl;
int maxCount = 0;
char maxName[30];
for (int i = 0; i < size; i++) {
    int currCount = 0;
    for (int j = 0; j < size; j++) {
        if (strcmp(ds[i], ds[j]) == 0) {
            currCount++;
        }
    }
    if (currCount > maxCount) {
        maxCount = currCount;
        strcpy(maxName, ds[i]);
    }
}
cout << maxName << endl;



}