#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int score[7] = {1, 2, 3, 4, 5, 6, 7};
    int sum = 0;

    for (int count = 0; count < 7; count ++) {
        sum += *(score + count);
    }
    return 0;
}