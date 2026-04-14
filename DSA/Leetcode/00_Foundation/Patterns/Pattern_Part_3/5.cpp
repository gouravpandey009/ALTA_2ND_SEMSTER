#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // LEFT stars
        for(int i = 1; i <= n - row + 1; i++) {
            cout << "*   ";
        }

        // MIDDLE spaces
        for(int s = 1; s <= row - 1; s++) {
            cout << "        ";
        }

        // RIGHT stars
        for(int i = 1; i <= n - row + 1; i++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
