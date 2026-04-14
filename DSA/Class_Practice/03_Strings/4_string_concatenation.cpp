#include <iostream>
#include <cstring> // Header for strcat()
using namespace std;

int main() {
    // IMPORTANT: The destination array 'a' must have enough extra 
    // space to hold the characters of 'b' plus the null terminator.
    char a[20] = "hello"; 
    char b[] = "world";

    cout << "String A before: " << a << endl;
    cout << "String B: " << b << endl;

    // strcat(destination, source) 
    // It appends 'world' to the end of 'hello'
    strcat(a, b);

    cout << "\nAfter Concatenation (strcat):" << endl;
    cout << "New String A: " << a << endl;

    return 0;
}