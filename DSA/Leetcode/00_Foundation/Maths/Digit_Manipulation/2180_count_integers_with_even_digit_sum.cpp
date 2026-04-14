/*
Solution 1 — Brute Force
*/

#include <iostream>
using namespace std;

/*
LeetCode 2180
Count Integers With Even Digit Sum
*/

class Solution {
public:

    // helper function to compute digit sum
    int digitSum(int n) {

        int sum = 0;

        while(n > 0) {

            sum += n % 10;   // extract last digit
            n /= 10;         // remove last digit
        }

        return sum;
    }

    int countEven(int num) {

        int count = 0;

        for(int i = 1; i <= num; i++) {

            int sum = digitSum(i);

            if(sum % 2 == 0)
                count++;
        }

        return count;
    }
};


/* Main function */
int main() {

    Solution obj;

    int num;

    cout << "Enter number: ";
    cin >> num;

    int result = obj.countEven(num);

    cout << "Numbers with even digit sum = " << result << endl;

    return 0;
}