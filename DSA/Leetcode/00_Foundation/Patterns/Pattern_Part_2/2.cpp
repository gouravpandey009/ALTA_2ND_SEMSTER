#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // left spaces
        for(int space = 1; space <= n - row; space++) {
            cout << "   ";   // space for pyramid shape
        }

        // for stars
        for(int star = 1; star <= 2*row - 1; star++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
