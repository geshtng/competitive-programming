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
    vector<int> inorderTraversal(TreeNode* root) {
        stack <TreeNode*> sti;
        vector <int> vec;
        TreeNode *head = root;

        while(head != NULL || !sti.empty()) {
            while(head != NULL) {
                sti.push(head);
                head = head->left;
            }

            head = sti.top();
            sti.pop();

            vec.push_back(head->val);

            head = head->right;
        }

        return vec;   
    }
};