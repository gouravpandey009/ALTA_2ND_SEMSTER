#include <iostream>
using namespace std;

/*
LeetCode 2520
Count the Digits That Divide a Number

Problem:
Given an integer num, count how many digits of num divide num exactly.

Example:
Input: 121
Digits: 1, 2, 1

121 % 1 = 0
121 % 2 = 1 (not divisible)
121 % 1 = 0

Answer = 2
*/

class Solution {
public:

    int countDigits(int num) {

        int original = num;   // store original number
        int count = 0;

        while(num > 0) {

            int digit = num % 10;   // extract last digit

            // check if digit divides the original number
            if(original % digit == 0)
                count++;

            num /= 10;  // remove last digit
        }

        return count;
    }
};


/* Main function */
int main() {

    Solution obj;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = obj.countDigits(num);

    cout << "Digits that divide the number = " << result << endl;

    return 0;
}