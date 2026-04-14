#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "banana";
    
    // Create an array of size 26 (for a-z) and initialize all to 0
    int freq[26] = {0};

    // 1. Map each character to an index (0-25)
    for(int i = 0; i < str.length(); i++) {
        // Logic: ASCII of 'b'(98) - ASCII of 'a'(97) = Index 1
        freq[str[i] - 'a']++;
    }

    cout << "Character Frequency in '" << str << "':" << endl;

    // 2. Print only the characters that appeared at least once
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            // Convert index back to character: Index 1 + 'a' = 'b'
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}