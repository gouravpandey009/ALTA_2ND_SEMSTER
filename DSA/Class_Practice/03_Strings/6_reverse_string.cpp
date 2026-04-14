#include <iostream>
#include <string> // Using the string class for easier length calculation
using namespace std;

int main() {
    string str = "hello";
    int n = str.length();

    cout << "Original: " << str << endl;

    // Logic: Loop only up to the middle (n/2)
    // If you loop to the end, you will swap everything twice and be back at the start!
    for (int i = 0; i < n / 2; i++) {
        // Swap characters using a temporary variable
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reverse:  " << str << endl;

    return 0;
}