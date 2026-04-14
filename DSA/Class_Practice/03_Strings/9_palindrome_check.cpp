#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "madam";
    int left = 0;
    int right = s.length() - 1;
    bool isPalindrome = true;

    // Logic: Compare characters from both ends moving inward
    while (left < right) {
        if (s[left] != s[right]) {
            isPalindrome = false; // Mismatch found
            break;
        }
        left++;
        right--;
    }

    cout << "String: " << s << endl;
    if (isPalindrome) {
        cout << "Result: Palindrome" << endl;
    } else {
        cout << "Result: Not a Palindrome" << endl;
    }

    return 0;
}