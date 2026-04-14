#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // for rows
    for(int i = 1; i <= n; i++) {

        // for spaces 
        for(int space = 1; space <= n - i; space++) {
            cout << "  ";
        }

        // for stars
        for(int star = 1; star <= i; star++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
