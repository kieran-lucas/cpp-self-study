#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char str[100];
    char res[100];
    cin.getline(str, 100);
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++ ) {
        if (isalpha(str[i]) || str[i] == ' ' || str[i] == ',' || str[i] == '.') {
            if (isalpha(str[i])) {
                if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ' ) {
                    res[j++] = toupper(str[i]);
                } else {
                    res[j++] = tolower(str[i]);
                }
            } else {
            res[j++] = str[i];
        }
        } 
    }
    res[j] = '\0';
    for (int i = 0; i < j; i++) {
        if (i == 0 && res[i] == ' ') {
            continue;            
        }
        if (res[i] == ' ' && res[i + 1] == ' ') {
            continue;
        }
        cout << res[i];
    }
}