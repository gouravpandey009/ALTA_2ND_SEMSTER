#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int row = 1; row <= n; row++) {

        // LEFT triangle
        for(int i = 1; i <= row; i++) {
            cout << "*   ";
        }

        // MIDDLE spaces
        int spaces = (n - row) * 2;
        for(int s = 1; s <= spaces; s++) {
            cout << "    ";
        }

        // RIGHT triangle
        for(int i = 1; i <= row; i++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
