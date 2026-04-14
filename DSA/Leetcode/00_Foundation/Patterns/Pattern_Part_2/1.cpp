#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // diagonal spaces
        for(int space = 1; space <= row - 1; space++) {
            cout << "   ";   // bigger gap for diagonal look
        }

        // stars with gap between them
        for(int star = 1; star <= n - row + 1; star++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
