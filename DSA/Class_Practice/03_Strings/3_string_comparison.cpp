#include <iostream>
#include <cstring> // Required for strcmp()
using namespace std;

int main() {
    // 1. Define two character arrays (C-style strings)
    char str1[] = "apple";
    char str2[] = "apple";
    char str3[] = "banana";

    // 2. Using strcmp(string1, string2)
    // It returns 0 if the strings are EXACTLY the same
    
    cout << "Comparing str1 and str2..." << endl;
    if (strcmp(str1, str2) == 0) {
        cout << "Result: The strings are Equal!" << endl;
    } else {
        cout << "Result: The strings are Not Equal." << endl;
    }

    cout << "\nComparing str1 and str3..." << endl;
    if (strcmp(str1, str3) == 0) {
        cout << "Result: Equal";
    } else {
        cout << "Result: Not Equal";
    }

    return 0;
}