#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60};
    int n = 6; // Current number of elements

    cout << "Original Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 1. DELETE FROM THE BEGINNING (Index 0)
    // Logic: Move everything from index 1 to the left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease size

    // 2. DELETE FROM THE MIDDLE (e.g: Delete the value 30 at index 1)
    int pos = 1; 
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    // 3. DELETE FROM THE END
    // Logic: Simply decrease the counter 'n'. The value stays in memory but is ignored.
    n--;

    // Final Output
    cout << "After Deletions: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}