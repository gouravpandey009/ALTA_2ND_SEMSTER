/*
Insert at End
1. Create new node
2. Traverse list
3. Stop when temp->next == NULL
4. temp->next = newNode
*/


int main() {
    Node* head = NULL; // Start with an empty list

    // Use your function to build the list
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40); // Adding a 4th node easily!

    // Print
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}


/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at End
void insertAtEnd(Node* &head, int val) {

    // Step 1: create new node
    Node* newNode = new Node(val);

    // Case 1: if list is empty
    if(head == NULL) {
        head = newNode;
        return;
    }

    // Step 2: traverse to last node
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Step 3: attach new node
    temp->next = newNode;
}

// Print function
void printList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    printList(head);

    return 0;
}
*/
