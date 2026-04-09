#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    Node* node1 = new Node();
    node1 -> data = 10;
    node1 -> next = NULL;

    cout << node1 -> data;

    return 0;
}