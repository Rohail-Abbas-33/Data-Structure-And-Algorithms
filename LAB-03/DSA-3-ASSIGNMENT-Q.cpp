#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Helper function to display the list
void displayForward(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// 1. Insert a new node at the beginning
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

// 2. Insert a new node at the end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// 3. Delete the first node
void deleteFirst(Node*& head) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

// 4. Delete the last node
void deleteLast(Node*& head) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
}

// 5. Search for a specific value
void searchValue(Node* head, int key) {
    Node* temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            cout << "Value " << key << " found at position " << pos << "." << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Value " << key << " not found in the list." << endl;
}

int main() {
    Node* head = NULL;

    // Testing Insertions
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtBeginning(head, 10);
    insertAtEnd(head, 40);

    cout << "List after insertions: ";
    displayForward(head); // 10 <-> 20 <-> 30 <-> 40 <-> NULL

    // Testing Search
    searchValue(head, 30);
    searchValue(head, 99);

    // Testing Deletions
    deleteFirst(head);
    cout << "After deleting first node: ";
    displayForward(head); // 20 <-> 30 <-> 40 <-> NULL

    deleteLast(head);
    cout << "After deleting last node: ";
    displayForward(head); // 20 <-> 30 <-> NULL

    // Clean up remaining memory
    while (head != NULL) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }

    return 0;
}
