#include <iostream>
#include <vector>
#include <algorithm> // For swap

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};


int main() {
    Solution sol;
    
    // Example Input
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    cout << "Original: ";
    for(char c : s) cout << c << " ";
    
    sol.reverseString(s);
    
    cout << "\nReversed: ";
    for(char c : s) cout << c << " ";
    cout << endl;

    return 0;
}
