/*
Using Extra Array
*/

#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 1470 - Shuffle the Array

    nums = [x1,x2,...,xn,y1,y2,...,yn]

    Output = [x1,y1,x2,y2,...,xn,yn]
*/

class Solution {
public:

    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> result;

        // Traverse first half
        for(int i = 0; i < n; i++) {

            // add element from first half
            result.push_back(nums[i]);

            // add element from second half
            result.push_back(nums[i + n]);
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

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(2*n);

    cout << "Enter " << 2*n << " elements:\n";

    for(int i = 0; i < 2*n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = obj.shuffle(nums, n);

    cout << "\nShuffled Array:\n";

    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
2md Approach - Using Index Formula
*/

/*
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> result(2*n);

        for(int i = 0; i < n; i++) {

            result[2*i] = nums[i];        // x elements
            result[2*i + 1] = nums[i+n];  // y elements
        }

        return result;
    }
};

int main() {

    Solution obj;

    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> nums(2*n);

    for(int i = 0; i < 2*n; i++)
        cin >> nums[i];

    vector<int> ans = obj.shuffle(nums, n);

    for(int x : ans)
        cout << x << " ";

    return 0;
}
*/

