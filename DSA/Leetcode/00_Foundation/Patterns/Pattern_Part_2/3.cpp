#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // Left space
        for(int space = 1; space <= row - 1; space++) {
            cout << "   ";
        }

        // Stars
        for(int star = 1; star <= 2*(n - row + 1) - 1; star++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
