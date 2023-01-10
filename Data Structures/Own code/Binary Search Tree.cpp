#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* create_node(int data) {
    struct Node* new_node = new Node();
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

// Inorder Traversal
void print_inorder(struct Node* root) {
    if (root != NULL) {
        // Traverse left
        print_inorder(root->left);
        
        // Traverse root
        cout << root->data << " ";

        // Traverse right
        print_inorder(root->right);
    }
}

// Preorder Traversal
void print_preorder(struct Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        print_preorder(root->left);
        print_preorder(root->right);
    }
}

// Postorder Traversal
void print_postorder(struct Node* root) {
    if (root != NULL) {
        print_postorder(root->left);
        print_postorder(root->right);
        cout << root->data << " ";
    }
}

// Insert a node
struct Node* insert(struct Node* node, int new_data) {
    // Return a new node if the tree is empty
    if (node == NULL) 
        return create_node(new_data);

    if (new_data < node->data)
        node->left = insert(node->left, new_data);
    else 
        node->right = insert(node->right, new_data);

    return node;
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Inorder: ";
    print_inorder(root);
    cout << "\n";

    cout << "Preorder: ";
    print_preorder(root);
    cout << "\n";

    cout << "Postorder: ";
    print_postorder(root);
    cout << "\n";

    return 0;
}
