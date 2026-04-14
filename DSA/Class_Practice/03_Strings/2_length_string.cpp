#include<iostream>
using namespace std;

int main() {
    char str[] = "hello";
    int length = 0;

    for(int i = 0 ; str[i] != '\0'; i++){
        length++;
    }

    cout << length;
}