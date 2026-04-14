#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Original string
    char str[] = "computer";
    
    // We want to extract "mpu" 
    // 'm' is at index 2, 'p' is at index 3, 'u' is at index 4
    int start = 2;
    int length = 3; 
    
    char sub[10]; // Destination array for the substring
    int i;

    // Logic: Loop from 'start' and copy 'length' number of characters
    for (i = 0; i < length; i++) {
        sub[i] = str[start + i];
    }

    // IMPORTANT: Manually add the null terminator to end the new string
    sub[i] = '\0'; 

    cout << "Original String: " << str << endl;
    cout << "Substring (from index 2, length 3): " << sub << endl;

    return 0;
}