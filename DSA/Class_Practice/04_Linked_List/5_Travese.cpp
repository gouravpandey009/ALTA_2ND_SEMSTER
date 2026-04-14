#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to traverse through the list and print each value
void printList(Node* head) {
    Node* temp = head; // Start at the beginning
    while(temp != NULL) { // Keep going until we hit a dead end (NULL)
        cout << temp->data << " "; // Print the current number
        temp = temp->next; // Move the pointer to the next box
    }
}

int main() {
    Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call the function and pass the first node (the head)
    printList(node1);

    return 0;
}
