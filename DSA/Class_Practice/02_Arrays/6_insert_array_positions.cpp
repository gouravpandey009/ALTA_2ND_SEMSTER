#include <iostream>
using namespace std;

int main() {
    // We create a larger capacity (10) to allow for new insertions
    int arr[10] = {10, 20, 30, 40, 50}; 
    int n = 5; // Current number of elements

    cout << "Initial Array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // 1. INSERT AT THE BEGINNING (Index 0)
    int valBegin = 5;
    for (int i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i]; // Shift everything one spot right
    }
    arr[0] = valBegin;
    n++; // Increase size

    // 2. INSERT AT THE END
    int valEnd = 60;
    arr[n] = valEnd; // No shifting needed for the end
    n++;

    // 3. INSERT AT THE MIDDLE (Let's say index 3)
    int pos = 3;
    int valMid = 25;
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i]; // Shift from the end down to 'pos'
    }
    arr[pos] = valMid;
    n++;

    // Final Output
    cout << "After All Insertions: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}