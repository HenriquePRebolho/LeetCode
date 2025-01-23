
#include <iostream>
#include <vector>

std::vector<int> inorderTraversal(TreeNode* root) {
    std::vector<int> res{};
    inorder(root, res);
    return res;
}

void inorder(TreeNode* root, std::vector<int> list) {
    if (!root) {
       return;
    }
    inorder(root->left, list);
    list.append(list.end(), root->val);
    inorder(root->right, list);
}

int main() {

}