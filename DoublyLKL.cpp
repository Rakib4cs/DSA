#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* insert(Node* head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr};
    if (!head) return newNode;
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

void display(Node* head) {
    for (Node* p = head; p; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

void displayReverse(Node* head) {
    if (!head) return;
    Node* tail = head;
    while (tail->next) tail = tail->next;
    for (Node* p = tail; p; p = p->prev)
        cout << p->data << " ";
    cout << endl;
}

int main() {
    Node* head = nullptr;
    head = insert(head, 9);
    head = insert(head, 3);
    head = insert(head, 5);

    cout << "Forward: ";
    display(head);
    cout << "Reverse: ";
    displayReverse(head);
}

