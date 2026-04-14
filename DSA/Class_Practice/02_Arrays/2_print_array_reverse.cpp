#include <iostream>
using namespace std;

int main() {
    // Initialize the array 
    int arr[] = {5, 10, 15, 20};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nArray in Reverse: ";

    // Logic: Start at (n-1) and decrement i until it reaches 0
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
