#include <iostream>
#include <string>

using namespace std;

/*
    LeetCode 709 - To Lower Case

    Convert all uppercase characters in a string
    to lowercase characters.
*/

class Solution {
public:

    string toLowerCase(string s) {

        // Traverse each character
        for(int i = 0; i < s.length(); i++) {

            // Check if character is uppercase
            if(s[i] >= 'A' && s[i] <= 'Z') {

                // Convert to lowercase using ASCII difference
                s[i] = s[i] + 32;
            }
        }

        return s;
    }
};


/*
    Main function 
*/

int main() {

    Solution obj;

    string input;

    cout << "Enter string: ";
    cin >> input;

    string result = obj.toLowerCase(input);

    cout << "Lowercase string: " << result << endl;

    return 0;
}


//2nd Approach - Builtin Method

/*
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:

    string toLowerCase(string s) {

        for(int i = 0; i < s.length(); i++) {

            // Convert using built-in function
            s[i] = tolower(s[i]);
        }

        return s;
    }
};

int main() {

    Solution obj;

    string input;

    cout << "Enter string: ";
    cin >> input;

    cout << obj.toLowerCase(input);

    return 0;
}
*/