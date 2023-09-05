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

void print_inorder_iterative(struct Node* root) {
    if (root == NULL) return;

    stack <struct Node*> nodeStack;
    struct Node* node = root;

    while (node != NULL || !nodeStack.empty()) {
        if (node != NULL) {
            nodeStack.push(node);
            node = node->left;
        } else {
            node = nodeStack.top();
            nodeStack.pop();

            cout << node->data << " ";
            node = node->right;
        }
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

void print_preorder_iterative(struct Node* root) {
    if (root == NULL) return;

    stack <struct Node*> nodeStack;
    nodeStack.push(root);

    while(!nodeStack.empty()) {
        struct Node* node = nodeStack.top();

        cout << node->data << " ";
        nodeStack.pop();

        if (node->right) nodeStack.push(node->right);
        if (node->left) nodeStack.push(node->left);
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

void print_postorder_iterative(struct Node* root) {
    if (root == NULL) return;

    stack <struct Node*> nodeStack;
    nodeStack.push(root);

    stack <int> data;

    while (!nodeStack.empty()) {
        struct Node* node = nodeStack.top();
        nodeStack.pop();

        data.push(node->data);

        if (node->left) nodeStack.push(node->left);

        if (node->right) nodeStack.push(node->right);
    }

    while (!data.empty()) {
        cout << data.top() << " ";
        data.pop();
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

    /* Tree visualization 
        
                8
              /   \
             /     \
           3       10
          / \        \
         /   \        \
        1      6       14
              / \
             /   \
            4     7

    */

    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);

    cout << "Recursive:\n";
    cout << "Inorder\t\t: ";
    print_inorder(root);
    cout << "\n";

    cout << "Preorder\t: ";
    print_preorder(root);
    cout << "\n";

    cout << "Postorder\t: ";
    print_postorder(root);
    cout << "\n\n";

    cout << "Iterative:\n";
    cout << "Inorder iterative\t: ";
    print_inorder_iterative(root);
    cout << endl;

    cout << "Preorder iterative\t: ";
    print_preorder_iterative(root);
    cout << endl;

    cout << "Postorder iterative\t: ";
    print_postorder_iterative(root);
    cout << endl;

    return 0;
}
