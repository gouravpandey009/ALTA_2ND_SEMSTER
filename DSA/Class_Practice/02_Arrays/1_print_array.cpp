#include <iostream>
using namespace std;

int main() {
    // 1. Declare and initialize an array of integers
    int arr[] = {10, 20, 30, 40, 50};
    
    // 2. Calculate the number of elements in the array
    // sizeof(arr) gives total bytes, sizeof(arr[0]) gives bytes of one element
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Printing the elements of the array:" << endl;

    // 3. Use a for loop to iterate through the array
    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}