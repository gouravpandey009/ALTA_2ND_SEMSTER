#include <iostream>
using namespace std;

/*
LeetCode 1281
Subtract the Product and Sum of Digits of an Integer

Technique:
Digit Extraction
*/

class Solution {
public:

    int subtractProductAndSum(int n) {

        int product = 1;
        int sum = 0;

        while(n > 0) {

            int digit = n % 10;   

            product *= digit;    
            sum += digit;        

            n /= 10;            
        }

        return product - sum;
    }
};


/* Main function*/
int main() {

    Solution obj;

    int n;

    cout << "Enter number: ";
    cin >> n;

    int result = obj.subtractProductAndSum(n);

    cout << "Result = " << result << endl;

    return 0;
}
