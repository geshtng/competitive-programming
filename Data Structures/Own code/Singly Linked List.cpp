#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void print_list(struct Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

void insert_back(struct Node** head, int new_data) {
    struct Node* new_node = new Node();
    struct Node* last = *head;

    new_node->data = new_data;
    new_node->next = NULL;

    // Check if head is empty
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
}

void insert_front(struct Node** head, int new_data) {
    struct Node* new_node = new Node();

    new_node->data = new_data;
    new_node->next = *head;

    (*head) = new_node;
}

void insert_at_index(struct Node** head, int index, int new_data) {
    struct Node* new_node = new Node();
    struct Node* last = *head;

    new_node->data = new_data;

    int pos = 0;
    while (last != NULL) {
        if (pos == index - 1) break;

        last = last->next;
        pos++;
    }

    new_node->next = last->next;
    last->next = new_node;
}

void delete_at_index(struct Node** head, int index) {
    struct Node* temp = *head;

    int pos = 0;
    while (temp != NULL) {
        if (pos == index - 1) break;
        
        temp = temp->next;
        pos++;
    }

    struct Node* next = temp->next->next;

    free(temp->next); // Free memory

    temp->next = next;
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 100;

    // 1 -> 9 -> 100
    print_list(head);
    
    // 1 -> 9 -> 100 -> 23
    insert_back(&head, 23);
    print_list(head);

    // 7 -> 1 -> 9 -> 100 -> 23
    insert_front(&head, 7);
    print_list(head);

    // 7 -> 1 -> 27 -> 9 -> 100 -> 23
    insert_at_index(&head, 2, 27);
    print_list(head);

    // 7 -> 1 -> 9 -> 100 -> 23
    delete_at_index(&head, 2);
    print_list(head);

    return 0;
}
