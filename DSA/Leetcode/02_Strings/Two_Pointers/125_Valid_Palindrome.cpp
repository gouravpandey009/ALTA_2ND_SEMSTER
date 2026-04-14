#include <iostream>
#include <string>
#include <cctype> // Needed for isalnum and tolower

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // 1. If left character is not a letter/number, skip it
            if (!isalnum(s[left])) {
                left++;
            } 
            // 2. If right character is not a letter/number, skip it
            else if (!isalnum(s[right])) {
                right--;
            } 
            // 3. Both are alphanumeric, so compare them
            else {
                // Convert both to lowercase before comparing
                if (tolower(s[left]) != tolower(s[right])) {
                    return false; 
                }
                left++;
                right--;
            }
        }
        return true; 
    }
};

// VS Code Runnable Main Function
int main() {
    Solution sol;
    
    // Case 1: Palindrome with spaces and punctuation
    string s1 = "A man, a plan, a canal: Panama";
    // Case 2: Not a palindrome
    string s2 = "race a car";

    cout << "Test 1: " << (sol.isPalindrome(s1) ? "PASSED (True)" : "FAILED") << endl;
    cout << "Test 2: " << (sol.isPalindrome(s2) ? "FAILED" : "PASSED (False)") << endl;

    return 0;
}
