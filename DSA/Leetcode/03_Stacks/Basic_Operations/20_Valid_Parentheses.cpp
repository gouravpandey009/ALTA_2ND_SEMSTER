#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // This is your "pile" of opening brackets

        for (char c : s) {
            // 1. If it's an opening bracket, add it to the pile
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // 2. If it's a closing bracket
            else {
                // If the pile is empty, there is no opener to match this closer
                if (st.empty()) return false;

                char top = st.top(); // Look at the last opener we added
                
                // Check if the closer matches the last opener
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    st.pop(); // They match! Remove the opener from the pile
                } else {
                    return false; // They don't match (e.g., '(' followed by ']')
                }
            }
        }

        // If the pile is empty at the end, everything matched perfectly
        return st.empty();
    }
};

int main() {
    Solution sol;
    
    // Example test cases
    string s1 = "()[]{}"; // Valid
    string s2 = "(]";     // Invalid
    string s3 = "([{}])"; // Valid

    cout << "Test 1: " << (sol.isValid(s1) ? "Valid" : "Invalid") << endl;
    cout << "Test 2: " << (sol.isValid(s2) ? "Valid" : "Invalid") << endl;
    cout << "Test 3: " << (sol.isValid(s3) ? "Valid" : "Invalid") << endl;

    return 0;
}
