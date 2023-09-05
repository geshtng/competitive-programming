// https://leetcode.com/problems/symmetric-tree/description/

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
    // Recursive
    bool isMirrored(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;
        
        if (!left || !right) return false;

        return (left->val == right->val) && isMirrored(left->left, right->right) && isMirrored(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirrored(root->left, root->right);
    }

    // Iterative
    bool isSymmetric_iterative(TreeNode* root) {
        if (!root) return true;
        
        TreeNode *leftNode, *rightNode;

        stack <TreeNode*> stackLeft, stackRight;
        stackLeft.push(root->left);
        stackRight.push(root->right);

        while (!stackLeft.empty() && !stackRight.empty()) {
            leftNode = stackLeft.top();
            rightNode = stackRight.top();

            stackLeft.pop();
            stackRight.pop();

            if (!leftNode && !rightNode) continue;
            if (!leftNode || !rightNode) return false;
            if (leftNode->val != rightNode->val) return false;

            stackLeft.push(leftNode->left);
            stackLeft.push(leftNode->right);

            stackRight.push(rightNode->right);
            stackRight.push(rightNode->left);
        }

        return true;
    }
};