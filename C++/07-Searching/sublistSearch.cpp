#include <iostream>
using namespace std;

// Node structure for linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Sublist Search Algorithm
// Time Complexity: O(NM) where M is sublist size
// Best for: Finding a pattern in linked lists

bool sublistSearch(Node* first, Node* second) {
    if (!first) return true;
    if (!second) return false;

    Node* ptr1 = first;
    Node* ptr2 = second;
    
    while (second)
    {
        ptr2 = second;
        while (ptr1 && ptr2 && ptr1->data == ptr2->data)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if (!ptr1) return true;
        ptr1 = first;
        second = second->next;
    }
    return false;
}

int main() {
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* second = new Node(1);
    second->next = new Node(2);
    second->next->next = new Node(3);
    second->next->next->next = new Node(4);
    second->next->next->next->next = new Node(5);

    if (sublistSearch(first, second))
        cout << "Sublist found" << endl;
    else
        cout << "Sublist not found" << endl;
    
    return 0;
}