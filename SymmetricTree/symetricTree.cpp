
#include <iostream>
#include <vector>

bool isSymmetric(TreeNode* root) {
    return recursive(root->left, root->right, true);
}

bool recursive(TreeNode* left, TreeNode* right, bool b) {
    if (left && right) {
        b = left->val == right->val;
        if (b) {
            b = recursive(left->right, right->left, b);
            if (b){
                b = recursive(left->left, right->right, b);
            }
            
        }
    } else if (!left && right || left && !right) {
        b = false;
    }
    return b;
}

int main() {

}


