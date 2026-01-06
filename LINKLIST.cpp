#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* insert(Node* head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) return newNode;      // first node
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    return head;
}

void display(Node* head) {
    for (Node* p = head; p; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

int main() {
    Node* head = nullptr;


    head = insert(head, 9);
    head = insert(head, 3);
    head = insert(head, 5);
    head = insert(head, 11);
    head = insert(head, 13);
    head = insert(head, 23);
    head = insert(head, 24);
    head = insert(head, 27);
    head = insert (head, 37);



    cout << "Linked List: ";
    display(head);
}
