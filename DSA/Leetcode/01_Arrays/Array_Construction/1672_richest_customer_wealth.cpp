/*
Simple 2D Array Traversal
*/

#include <iostream>
#include <vector>

using namespace std;

/*
    LeetCode 1672 - Richest Customer Wealth

    Each row represents a customer
    Each column represents money in a bank account

    Wealth of customer = sum of all accounts
    We return the maximum wealth
*/

class Solution {
public:

    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;

        // Traverse each customer
        for(int i = 0; i < accounts.size(); i++) {

            int currentWealth = 0;

            // Sum all bank accounts of that customer
            for(int j = 0; j < accounts[i].size(); j++) {

                currentWealth += accounts[i][j];
            }

            // Update maximum wealth
            maxWealth = max(maxWealth, currentWealth);
        }

        return maxWealth;
    }
};


/*
    Main function for running in VS Code
*/

int main() {

    Solution obj;

    int m, n;

    cout << "Enter number of customers (rows): ";
    cin >> m;

    cout << "Enter number of accounts per customer (columns): ";
    cin >> n;

    vector<vector<int>> accounts(m, vector<int>(n));

    cout << "Enter account balances:\n";

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    int richest = obj.maximumWealth(accounts);

    cout << "\nRichest Customer Wealth: " << richest << endl;

    return 0;
}

/*
2nd Approach - Using Range-Based Loops
*/

/*
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    int maximumWealth(vector<vector<int>>& accounts) {

        int maxWealth = 0;

        for(auto customer : accounts) {

            int sum = 0;

            for(int money : customer) {
                sum += money;
            }

            maxWealth = max(maxWealth, sum);
        }

        return maxWealth;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> accounts = {
        {1,2,3},
        {3,2,1}
    };

    cout << obj.maximumWealth(accounts);

    return 0;
}
*/
