#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 1480 - Running Sum of 1D Array

    Running Sum means:
    result[i] = sum of elements from index 0 to i
*/

/*
Using Extra Array
*/

class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();

        // Create result array
        vector<int> result(n);

        // First element stays same
        result[0] = nums[0];

        // Calculate running sum
        for(int i = 1; i < n; i++) {

            result[i] = result[i-1] + nums[i];
        }

        return result;
    }
};


/*
    Main function
*/

int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.runningSum(nums);

    cout << "\nRunning Sum Array:\n";

    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

//2nd Approach - Modify Same Array

/*
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> runningSum(vector<int>& nums) {

        for(int i = 1; i < nums.size(); i++) {

            // Add previous prefix sum
            nums[i] = nums[i] + nums[i-1];
        }

        return nums;
    }
};

int main() {

    Solution obj;

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.runningSum(nums);

    cout << "\nRunning Sum Array:\n";

    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
*/