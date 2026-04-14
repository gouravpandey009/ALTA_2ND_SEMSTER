#include <iostream>
using namespace std;

// The Blueprint: Each node has data and a pointer to the next person
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


// --- Helper Function: To build the list for testing ---
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// --- Helper Function: To see the list ---
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 1. DELETE FIRST (HEAD)

void deleteFirst(Node* &head) {
    if (head == NULL) return; // Empty list check

    Node* temp = head;    // 1. Save the current head
    head = head->next;    // 2. Move head forward
    delete temp;          // 3. Free the memory
}


// 2. DELETE LAST (TAIL)

void deleteLast(Node* &head) {
    if (head == NULL) return;
    
    // Only one node in the list
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    // Stop at the SECOND-TO-LAST node
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;    // Delete the actual last node
    temp->next = NULL;    // Disconnect the link
}


// 3. DELETE MIDDLE (AT POSITION)

void deleteAtPosition(Node* &head, int pos) {
    if (head == NULL) return;

    // Use deleteFirst if position is 1
    if (pos == 1) {
        deleteFirst(head);
        return;
    }

    Node* temp = head;
    // Move to (pos - 1)
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    // Check if the node to delete exists
    if (temp->next == NULL) return;

    Node* nodeToDelete = temp->next;    // Target at 'pos'
    temp->next = temp->next->next;      // Link (pos-1) to (pos+1)
    delete nodeToDelete;                // Free memory
}

// --- MAIN FUNCTION ---
int main() {
    Node* head = NULL;

    // Creating: 10 -> 20 -> 30 -> 40 -> 50
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    cout << "Original List: ";
    printList(head);

    // 1. Delete First
    deleteFirst(head);
    cout << "After Delete First: ";
    printList(head);

    // 2. Delete Last
    deleteLast(head);
    cout << "After Delete Last:  ";
    printList(head);

    // 3. Delete Middle (Position 2, which is '30' now)
    deleteAtPosition(head, 2);
    cout << "After Delete Pos 2: ";
    printList(head);

    return 0;
}

/*
Delete First: No loop needed; just move the head.
Delete Last: Loop until temp->next->next == NULL.
Delete Middle: Loop until pos - 1 so you can bridge the gap.
*/