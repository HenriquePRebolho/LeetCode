#include <iostream>
#include <vector>

bool pathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    
    if (!root->left && !root->right) {
        return targetSum == root->val;
    }
    bool left = pathSum(root->left, targetSum - root->val);
    bool right = pathSum(root->right, targetSum - root->val);
    return left || right;
}

