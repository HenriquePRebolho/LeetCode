
#include <iostream>
#include <vector>

std::vector<int> preorderTraversal(TreeNode* root) {

    if (!root) return {};
    if (!root->left && !root->right) return {root->val};

    std::vector<int> ans {root->val};
    std::vector<int> left {preorderTraversal(root->left)};
    ans.insert(ans.end(), left.begin(), left.end());
    std::vector<int> right {preorderTraversal(root->right)};
    ans.insert(ans.end(), right.begin(), right.end());
    return ans;
}


int main() {

}