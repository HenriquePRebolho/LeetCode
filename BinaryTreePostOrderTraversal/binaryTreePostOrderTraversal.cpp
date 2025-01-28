
#include <iostream>
#include <vector>

std::vector<int> postorderTraversal(TreeNode* root) {

    if (!root) return {};
    if (!root->left && !root->right) return {root->val};

    std::vector<int> left {postorderTraversal(root->left)};
    std::vector<int> right {postorderTraversal(root->right)};
    left.insert(left.end(), right.begin(), right.end());
    left.insert(left.end(), root->val);
    
    return left;
}


int main() {

}