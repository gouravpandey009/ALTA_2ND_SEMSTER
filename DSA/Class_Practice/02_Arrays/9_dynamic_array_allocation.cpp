#include <iostream>
using namespace std;

int main() {
    int size;

    // 1. Get the size from the user at "Runtime"
    cout << "Step 1: Enter the number of elements you want: ";
    cin >> size;

    // 2. Dynamic Allocation
    // We use 'new' to reserve space in the HEAP memory
    int* myArray = new int[size]; 

    // 3. Inputting data
    cout << "Step 2: Enter " << size << " integers below:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "  Enter element " << i << ": ";
        cin >> myArray[i];
    }

    // 4. Outputting data
    cout << "\nStep 3: Displaying your Dynamic Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // 5. IMPORTANT: Memory Cleanup
    // Since we used 'new', we must manually 'delete' to prevent memory leaks
    delete[] myArray;
    cout << "\nMemory has been successfully freed." << endl;

    return 0;
}