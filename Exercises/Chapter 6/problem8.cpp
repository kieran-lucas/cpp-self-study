#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cin.ignore();
    char** board = new char*[m];
    for (int i = 0; i < m; i++) {
        board[i] = new char[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        bool check = true;
        for (int j = 0; j < n; j++) {
            if (board[i][j] != board[i][0]) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int j = 0; j < n; j++) {
        bool check = true;
        for (int i = 0; i < m; i++) {
            if (board[i][j] != board[0][j]) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << j << " ";
        }
    }
    cout << endl;
    if (m == n) {
        bool check = true;
        for (int i = 0; i < n; i++) {
            
            if (board[i][i] != board[0][0]) {
                check = false;
                break;
            }
            
            }
        if (check) {
                cout << "Duong cheo chinh" << endl;
        }
        check = true;
        for (int i = 0; i < n; i++) {
           
            if (board[i][n - i - 1] != board[0][n - 1]) {
                check = false;
                break;
            }
            
            }
        if (check) {
                cout << "Duong cheo phu" << endl;
        }

    }
}