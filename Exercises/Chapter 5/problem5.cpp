#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);
    int size = strlen(str);
    cout << size << endl;
    
    char str1[100];
    int j = 0;
    for (int i = 0; i < size; i++ ) {
        if (str[i] != '?' && str[i] != '!') {
            str1[j++] = str[i];
        }
    }
    str1[j]= '\0';
    cout << str1 << endl;

    int mid = size/2;
    char strcpy[100];
    strncpy(strcpy, str, mid);
    strcpy[mid] = '\0';
    strcat(strcpy, "C++");
    strcat(strcpy, str + mid);
    cout << strcpy << endl;

    char removed[100];
    strncpy(removed, str, mid - 2);
    removed[mid - 2] = '\0';
    strcat(removed, str + mid + 2);
    cout << removed << endl;

}