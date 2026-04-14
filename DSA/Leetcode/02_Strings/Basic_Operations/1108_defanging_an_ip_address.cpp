#include <iostream>
#include <string>

using namespace std;

/*
    LeetCode 1108 - Defanging an IP Address

    Replace every "." in the IP address with "[.]"

    Example:
    Input:  192.168.1.1
    Output: 192[.]168[.]1[.]1
*/

class Solution {
public:

    string defangIPaddr(string address) {

        // New string to store result
        string result = "";

        // Traverse each character
        for(char ch : address) {

            // If character is '.'
            if(ch == '.') {

                // Replace with "[.]"
                result += "[.]";
            }
            else {

                // Otherwise add the same character
                result += ch;
            }
        }

        return result;
    }
};


/*
    Main function
*/

int main() {

    Solution obj;

    string ip;

    cout << "Enter IP Address: ";
    cin >> ip;

    string ans = obj.defangIPaddr(ip);

    cout << "Defanged IP: " << ans << endl;

    return 0;
}

// 2nd Approach - Using String Replace Logic

/*
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:

    string defangIPaddr(string address) {

        string result;

        for(int i = 0; i < address.length(); i++) {

            if(address[i] == '.')
                result.append("[.]");
            else
                result.push_back(address[i]);
        }

        return result;
    }
};

int main() {

    Solution obj;

    string ip;

    cout << "Enter IP Address: ";
    cin >> ip;

    cout << obj.defangIPaddr(ip) << endl;

    return 0;
}
*/