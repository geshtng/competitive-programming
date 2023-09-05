// https://leetcode.com/problems/same-tree/description/

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
class Solution{
public:
    // Recursive
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;

        if (p == NULL || q == NULL) return false;

        if (p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);

        return false;
    }

    // Iterative
    bool isSameTree_iterative(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;

        if (p == NULL || q == NULL) return false;

        stack <TreeNode*> nodeStack1, nodeStack2;
        nodeStack1.push(p);
        nodeStack2.push(q);

        TreeNode *node1, *node2;

        while (!nodeStack1.empty() && !nodeStack2.empty()) {
            node1 = nodeStack1.top();
            node2 = nodeStack2.top();

            nodeStack1.pop();
            nodeStack2.pop();

            if (!node1 && !node2) continue;
            if (!node1 || !node2) return false;
            if (node1->val != node2->val) return false;

            nodeStack1.push(node1->right);
            nodeStack1.push(node1->left);

            nodeStack2.push(node2->right);
            nodeStack2.push(node2->left);
        }

        return true;
    }
};