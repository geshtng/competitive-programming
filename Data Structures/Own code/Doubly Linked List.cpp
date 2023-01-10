#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void print_list_reverse(struct Node* head) {
    while (head != NULL) {
        if (head->next != NULL) {
            head = head->next;
        } else break;
    }

    while (head != NULL) {
        cout << head->data << " ";
        head = head->prev;
    }

    cout << "\n";
}

void print_list(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }

    cout << "\n";
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 9;
    head->prev = NULL;
    head->next = second;

    second->data = 23;
    second->prev = head;
    second->next = third;

    third->data = 77;
    third->prev = second;
    third->next = NULL;

    print_list(head);

    print_list_reverse(head);

    return 0;
}
