// CASE 1: DELETE FIRST NODE

void deleteFirst(Node* &head) {

    if(head == NULL) return;

    Node* temp = head;
    head = head->next;

    delete temp;
}

//CASE 2: DELETE LAST NODE

void deleteLast(Node* &head) {

    if(head == NULL) return;

    // only one node
    if(head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}


//CASE 3: DELETE MIDDLE NODE (Position based)

void deleteAtPosition(Node* &head, int pos) {

    if(head == NULL) return;

    // delete first
    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    for(int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    Node* del = temp->next;

    temp->next = temp->next->next;

    delete del;
}
  