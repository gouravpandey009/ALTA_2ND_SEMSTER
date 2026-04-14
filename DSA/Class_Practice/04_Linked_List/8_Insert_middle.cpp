#include <iostream>
using namespace std;

// 1. The Blueprint: Every "Node" has a value and a link to the next one
struct Node {
    int data;
    Node* next;

    // A simple way to create a new node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// 2. The Logic: Putting a new node in the middle
void insertAtMiddle(Node* &head, int pos, int val) {
    Node* newNode = new Node(val);

    // If we want to put it at the very start
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Move a 'temp' pointer to the spot just BEFORE where we want to insert
    Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    // The "Handshake": 
    // New node points to what's ahead, then the previous node points to the new one
    newNode->next = temp->next;
    temp->next = newNode;
}

// 3. The Printer: To see our list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a simple list: 10 -> 30
    Node* head = new Node(10);
    head->next = new Node(30);

    cout << "Before: ";
    printList(head);

    // Insert 20 at position 2 (between 10 and 30)
    insertAtMiddle(head, 2, 20);

    cout << "After:  ";
    printList(head);
  
    return 0;
}
