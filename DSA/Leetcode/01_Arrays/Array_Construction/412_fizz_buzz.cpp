#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
    LeetCode 412 : Fizz Buzz

    Problem:
    For numbers from 1 to n:
    - If divisible by 3 → "Fizz"
    - If divisible by 5 → "Buzz"
    - If divisible by 3 and 5 → "FizzBuzz"
    - Otherwise → print the number

    This program is made runnable in VS Code for students.
*/

class Solution {
public:

    vector<string> fizzBuzz(int n) {

        // Vector to store the answer
        vector<string> result;

        // Loop from 1 to n
        for(int i = 1; i <= n; i++) {

            // divisible by both 3 and 5
            if(i % 15 == 0) {
                result.push_back("FizzBuzz");
            }

            // divisible by 3
            else if(i % 3 == 0) {
                result.push_back("Fizz");
            }

            // divisible by 5
            else if(i % 5 == 0) {
                result.push_back("Buzz");
            }

            // otherwise push number
            else {
                result.push_back(to_string(i));
            }
        }

        return result;
    }
};


/* 
   MAIN FUNCTION
*/
int main() {

    Solution obj;

    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<string> ans = obj.fizzBuzz(n);

    cout << "\nOutput:\n";

    for(string s : ans) {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}

//2nd Approach

/*

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector<string> fizzBuzz(int n) {

        vector<string> result;

        for(int i = 1; i <= n; i++) {

            string current = "";

            if(i % 3 == 0)
                current += "Fizz";

            if(i % 5 == 0)
                current += "Buzz";

            if(current == "")
                current = to_string(i);

            result.push_back(current);
        }

        return result;
    }
};

int main() {

    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<string> ans = obj.fizzBuzz(n);

    for(string s : ans)
        cout << s << " ";

    cout << endl;
}
    
*/

