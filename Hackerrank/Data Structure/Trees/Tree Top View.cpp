#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    struct QueueObj{
        Node* node;
        int hd;
        QueueObj(Node *node, int hd){
            this->node = node;
            this->hd = hd;
        }
    };
 

    void topView(Node * root) {
        if (root == NULL) return;
        
        queue <QueueObj*> q;
        map <int, int> mp;
        int mn = 0, mx = 0;
        
        q.push(new QueueObj(root, 0));
        while(!q.empty()){
            QueueObj* curr = q.front();
            q.pop();
            
            if(mp.find(curr->hd) == mp.end()){
                mp[curr->hd] = curr->node->data;
            }
            
            if(curr->node->left != NULL){
                mn = min(mn, curr->hd-1);
                q.push(new QueueObj(curr->node->left, curr->hd-1));
            }
            
            if(curr->node->right != NULL){
                mx = max(mx, curr->hd+1);
                q.push(new QueueObj(curr->node->right, curr->hd+1));
            }
        }
        
        for(; mn<=mx; mn++){
            cout<<mp[mn]<<" ";
        }
        cout<<endl;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}