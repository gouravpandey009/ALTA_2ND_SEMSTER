#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int totalRows = 2 * n - 1;

    for(int row = 1; row <= totalRows; row++) {

        int stars;

        if(row <= n)
            stars = row;
        else
            stars = 2 * n - row;

        for(int i = 1; i <= stars; i++) {
            cout << "*   ";
        }

        cout << endl;
    }

    return 0;
}
