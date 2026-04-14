/*
Solution 1 — Optimal (Euclidean Algorithm)
*/

#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 1979
Find Greatest Common Divisor of Array
*/

class Solution {
public:

    // Function to compute GCD using Euclidean Algorithm
    int gcd(int a, int b) {

        while(b != 0) {

            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    int findGCD(vector<int>& nums) {

        int minVal = nums[0];
        int maxVal = nums[0];

        // find minimum and maximum
        for(int num : nums) {

            if(num < minVal)
                minVal = num;

            if(num > maxVal)
                maxVal = num;
        }

        return gcd(minVal, maxVal);
    }
};


/* main function */
int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    int result = obj.findGCD(nums);

    cout << "GCD of smallest and largest element = " << result << endl;

    return 0;
}