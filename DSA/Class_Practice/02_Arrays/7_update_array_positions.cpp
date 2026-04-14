#include <iostream>
using namespace std;

int main() {
    // Standard initialization
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    // 1. Update at BEGINNING
    arr[0] = 99;

    // 2. Update at MIDDLE 
    // For size 5, n/2 is index 2
    int mid = n / 2;
    arr[mid] = 555;

    // 3. Update at END
    arr[n - 1] = 100;

    // Output loop
    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}