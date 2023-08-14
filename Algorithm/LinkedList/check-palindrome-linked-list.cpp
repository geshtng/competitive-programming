#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node *next;
    Node(int x) : value(x), next(NULL) {}
};

bool is_palindrome(struct Node* head) {
    struct Node* temp = head;
    stack <int> sti;

    while(temp != NULL) {
        sti.push(temp->value);
        temp = temp->next;
    }

    while (head != NULL) {
        int data = sti.top();
        sti.pop();

        if (head->value != data) return false;

        head = head->next;
    }

    return true;
}

int main() {
    struct Node* first = new Node(1);
    struct Node* second = new Node(2);
    struct Node* third = new Node(3);

    first->next = second;
    second->next = third;

    cout << is_palindrome(first) << endl;

    return 0;
}