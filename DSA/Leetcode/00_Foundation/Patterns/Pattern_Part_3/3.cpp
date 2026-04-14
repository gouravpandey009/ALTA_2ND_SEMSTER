#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int mid = n / 2;

    // Upper half
    for(int i = 0; i <= mid; i++) {

        for(int space = 0; space < mid - i; space++)
            cout << "  ";

        if(i == 0) {
            cout << "*";
        } else {
            cout << "*";
            for(int gap = 0; gap < 2*i - 1; gap++)
                cout << "  ";
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for(int i = mid - 1; i >= 0; i--) {

        for(int space = 0; space < mid - i; space++)
            cout << "  ";

        if(i == 0) {
            cout << "*";
        } else {
            cout << "*";
            for(int gap = 0; gap < 2*i - 1; gap++)
                cout << "  ";
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
