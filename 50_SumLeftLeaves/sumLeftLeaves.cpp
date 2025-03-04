// Leetcode problem 404, done in 04/03/2025 

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// mine
int sumOfLeftLeaves(TreeNode* root, int sum = 0) {
    if (!root) return 0;
    
    if (!root->left->right && !root->left->left) {
        sum += root->left->val;
        return sum;
    }
    return sumOfLeftLeaves(root->left);
    return sumOfLeftLeaves(root->right);
}


// not mine: Aryansh kurmi, very clever guy
int sumOfLeftLeaves2(TreeNode* root, bool isLeft = false) {
    if (!root) return 0;
    if (!root->left && !root->right) return isLeft ? root->val : 0;
    return sumOfLeftLeaves2(root->left, true) + sumOfLeftLeaves2(root->right, false);
}

