#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // for spaces
        for(int space = 1; space <= i - 1; space++) {
            cout << "  ";
        }

        // for stars
        for(int star = 1; star <= n - i + 1; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
