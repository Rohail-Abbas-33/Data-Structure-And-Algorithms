#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;
    
    head->data = 5;
    second->data = 10;
    third->data = 15;
    fourth->data = 20;
    fifth->data = 25;
    
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    int count = 0;
    Node* temp = head;
    cout << "Linked List (Fixed Values): ";
    while (temp != NULL) {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;

    // Modify to take five values from the user
    cout << "\nEnter 5 new integer values: ";
    cin >> head->data >> second->data >> third->data >> fourth->data >> fifth->data;

    count = 0;
    temp = head;
    cout << "Linked List (User Input): ";
    while (temp != NULL) {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << "Total nodes: " << count << endl;

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
