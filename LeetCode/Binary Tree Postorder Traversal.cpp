/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack <TreeNode*> s1, s2;
        vector <int> vec;

        s1.push(root);
        TreeNode *head;

        while (!s1.empty()) {
            head = s1.top();
            s1.pop();
            s2.push(head);

            if (head->left) s1.push(head->left);
            if (head->right) s1.push(head->right);
        }

        while (!s2.empty()) {
            head = s2.top();
            s2.pop();
            vec.push_back(head->val);
        }

        return vec;
    }
};