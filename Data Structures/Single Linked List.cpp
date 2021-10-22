#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void insert_front(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void insert_back(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    while (last->next != NULL) 
        last = last->next;

    last->next = new_node;
}

void insert_after(struct Node *prev_node, int new_data) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL";
        return;
    }

    struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void print_list(Node *list) {
    while (list != NULL) {
        cout << list->data << " ";
        list = list->next;
    }

    cout << endl;
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    print_list(head);

    insert_back(&head, 4);

    print_list(head);

    insert_front(&head, 5);

    print_list(head);

    insert_after(second, 9);

    print_list(head);

    return 0;
}