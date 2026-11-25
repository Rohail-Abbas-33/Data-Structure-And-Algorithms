#include <iostream>
using namespace std;

// Node structure definition
struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    // Create five nodes dynamically using new keyword
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;
    Node* n4 = new Node;
    Node* n5 = new Node;

    // Take five integer values from the user
    cout << "Enter 5 integer values: ";
    cin >> n1->data >> n2->data >> n3->data >> n4->data >> n5->data;

  
    // First node
    n1->prev = NULL;
    n1->next = n2;

    // Second node
    n2->prev = n1;
    n2->next = n3;

    // Third node
    n3->prev = n2;
    n3->next = n4;

    // Fourth node
    n4->prev = n3;
    n4->next = n5;

    // Fifth (last) node
    n5->prev = n4;
    n5->next = NULL;

    Node* head = n1; 
    Node* tail = n5; 
    // Forward Traversal and Node Counting
    int count = 0;
    Node* temp = head;
    cout << "\nForward Traversal:\n";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        count++; 
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Backward Traversal
    temp = tail;
    cout << "Backward Traversal:\n";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;

    // Display total number of nodes
    cout << "Total Nodes: " << count << endl;

    // Release dynamically allocated memory
    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;

    return 0;
}
