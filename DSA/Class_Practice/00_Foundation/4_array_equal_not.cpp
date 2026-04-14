#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the arrays: ";
    cin >> n;

    int a[n], b[n];


    cout << "Enter " << n << " elements for the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter " << n << " elements for the second array: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool isEqual = true; 

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            isEqual = false; 
            break;         
        }
    }

    cout << "---------------------------" << endl;
    if (isEqual) {
        cout << "Result: Arrays are Equal" << endl;
    } else {
        cout << "Result: Arrays are Not Equal" << endl;
    }

    return 0;
}
