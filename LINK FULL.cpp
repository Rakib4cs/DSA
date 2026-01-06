#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Insert at end
Node* insertNode(Node* head, int value) {
    Node* newNode = new Node{value, NULL};
    if (!head) return newNode;

    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    return head;
}

// Create list with random numbers
Node* createRandomList(int n) {
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        int value = rand() % 100;   // random 0–99
        head = insertNode(head, value);
    }
    return head;
}

// Display list
void display(Node* head) {
    cout << "List: ";
    for (Node* p = head; p; p = p->next)
        cout << p->data << " ";
    cout << endl;
}

// Bubble sort
void bubbleSort(Node* head) {
    if (!head) return;
    bool swapped;
    Node* p;

    do {
        swapped = false;
        p = head;
        while (p->next) {
            if (p->data > p->next->data) {
                int temp = p->data;
                p->data = p->next->data;
                p->next->data = temp;
                swapped = true;
            }
            p = p->next;
        }
    } while (swapped);
}

// Search item
bool searchNode(Node* head, int key) {
    for (Node* p = head; p; p = p->next)
        if (p->data == key) return true;
    return false;
}

// Delete item
Node* deleteNode(Node* head, int key) {
    if (!head) return head;

    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* p = head;
    while (p->next && p->next->data != key)
        p = p->next;

    if (p->next) {
        Node* temp = p->next;
        p->next = p->next->next;
        delete temp;
    }

    return head;
}

int main() {
    Node* head = NULL;
    int choice, n, key;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Create Random List\n";
        cout << "2. Display List\n";
        cout << "3. Sort List (Bubble Sort)\n";
        cout << "4. Search Item\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "How many random numbers? ";
            cin >> n;
            head = createRandomList(n);
            cout << "Random list created.\n";
        }
        else if (choice == 2) {
            display(head);
        }
        else if (choice == 3) {
            bubbleSort(head);
            cout << "List sorted.\n";
        }
        else if (choice == 4) {
            cout << "Enter item to search: ";
            cin >> key;
            if (searchNode(head, key))
                cout << key << " found.\n";
            else
                cout << key << " not found.\n";
        }
        else if (choice == 5) {
            cout << "Enter item to delete: ";
            cin >> key;
            head = deleteNode(head, key);
            cout << "Item deleted (if existed).\n";
        }
        else if (choice == 6) {
            cout << "Exiting...\n";
            break;
        }
        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
