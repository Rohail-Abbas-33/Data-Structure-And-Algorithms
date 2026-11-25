#include <iostream>
using namespace std;
 Cdf
struct Node {
    int data;
    Node* next;
};

int main() {
  
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;
    Node* n4 = new Node;
    Node* n5 = new Node;

    cout << "Enter 5 integer values: ";
    cin >> n1->data >> n2->data >> n3->data >> n4->data >> n5->data;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    Node* head = n1;

    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        count++;
        temp = temp->next;
    }
    cout << "NULL Total nodes: " << count << endl;

    delete n1;
    delete n2;
    delete n3;
    delete n4;
    delete n5;

    return 0;
}
