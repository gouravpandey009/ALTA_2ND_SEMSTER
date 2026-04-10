#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to insert at beginning
void insertAtBeginning(Node* &head, int val) {
    
    // Step 1: create new node
    Node* newNode = new Node(val);

    // Step 2: point new node to current head
    newNode->next = head;

    // Step 3: move head to new node
    head = newNode;
}

// Function to print list
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

    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 5);

    printList(head);

    return 0;
}

//Insert at beginning
/*
void insertAtBeginning(Node* &head, int value)
{
Node* newNode = new Node();
newNode->data = value;
newNode->next = head;
head = newNode;
}

*/
