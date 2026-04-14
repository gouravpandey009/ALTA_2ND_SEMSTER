#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Initialize the string
    string str = "education";
    int count = 0;

    cout << "Original String: " << str << endl;

    // 2. Use a "for-each" loop to check every character 'c' in the string
    for (char c : str) {
        // Convert to lowercase if needed, but here we check the basics:
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    // 3. Output the final count
    cout << "Number of vowels: " << count << endl;

    return 0;
}