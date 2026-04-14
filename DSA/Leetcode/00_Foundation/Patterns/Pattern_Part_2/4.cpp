#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // Left space
        for(int space = 1; space <= n - row; space++) {
            cout << "   ";
        }

        // for Symbols pyramid
        int total = 2 * row - 1;

        for(int pos = 1; pos <= total; pos++) {

            if(pos % 2 == 1)
                cout << "*   ";
            else
                cout << "!   ";
        }

        cout << endl;
    }

    return 0;
}
