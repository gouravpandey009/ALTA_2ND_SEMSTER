#include <iostream>
using namespace std;

/*
LeetCode 2119
A Number After a Double Reversal

Observation:
Trailing zeros disappear after reversal.

Example:
120 -> 21 -> 12  (not same)

So if number ends with 0 (except 0 itself),
double reversal cannot give original number.
*/


class Solution {
public:

    bool isSameAfterReversals(int num) {

        // Special case
        if(num == 0)
            return true;

        // If last digit is 0, reversal loses information
        if(num % 10 == 0)
            return false;

        return true;
    }
};


/* Main function */
int main() {

    Solution obj;

    int num;

    cout << "Enter number: ";
    cin >> num;

    bool result = obj.isSameAfterReversals(num);

    if(result)
        cout << "True - Number remains same after double reversal\n";
    else
        cout << "False - Number changes after double reversal\n";

    return 0;
}