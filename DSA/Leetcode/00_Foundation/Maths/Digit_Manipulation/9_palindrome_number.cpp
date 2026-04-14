/*
Solution 1 — Reverse the Number
*/

#include <iostream>
using namespace std;

/*
LeetCode 9
Palindrome Number

Idea:
Reverse the number and compare with original.
*/

class Solution {
public:
    
    bool isPalindrome(int x) {

        // negative numbers cannot be palindrome
        if(x < 0)
            return false;

        int original = x;
        long reversed = 0;

        while(x > 0) {

            int digit = x % 10;     // extract last digit
            reversed = reversed * 10 + digit;

            x /= 10;                // remove last digit
        }

        return original == reversed;
    }
};


/* main function */
int main() {

    Solution obj;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    bool result = obj.isPalindrome(num);

    if(result)
        cout << "Palindrome Number\n";
    else
        cout << "Not a Palindrome Number\n";

    return 0;
}

/*
Solution 2 — Optimal (Reverse Half Only)
*/

#include <iostream>
using namespace std;

/*
Optimal approach:
Reverse only half of the number.
*/

/*
class Solution {
public:

    bool isPalindrome(int x) {

        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int reversedHalf = 0;

        while(x > reversedHalf) {

            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == reversedHalf) || (x == reversedHalf / 10);
    }
};

int main() {

    Solution obj;

    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << (obj.isPalindrome(num) ? "Palindrome\n" : "Not Palindrome\n");

    return 0;
}


*/
