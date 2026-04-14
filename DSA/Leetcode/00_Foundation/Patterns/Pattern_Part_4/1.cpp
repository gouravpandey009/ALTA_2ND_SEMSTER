#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 5;
    int totalRows = 2 * n - 1;

    for(int row = 1; row <= totalRows; row++) {

        int spaces = abs(n - row);
        int stars  = n - spaces;

        // shift (diagonal move)
        for(int s = 1; s <= spaces; s++) {
            cout << "    ";
        }

        // actual stars in that row
        for(int i = 1; i <= stars; i++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
