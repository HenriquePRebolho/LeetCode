// Leetcode problem 257, done in 24/03/2025

#include <vector>
#include <string>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

std::vector<std::string> binaryTreePaths(TreeNode* root) {
    if (!root) return {};

    std::vector<std::string> ls{};

    if (!root->left && !root->right) {
        ls.push_back(std::to_string(root->val));
        return ls;
    }

    if (root->left) {
        std::vector<std::string> left {binaryTreePaths(root->left)};
        std::string r = std::to_string(root->val) + "->";
        for (std::string s : left) {
            ls.push_back(r + s);
        }
    }
    if (root->right) {
        std::vector<std::string> right {binaryTreePaths(root->right)};
        std::string r = std::to_string(root->val) + "->";
        for (std::string s : right) {
            ls.push_back(r + s);
        }
    }
    return ls;

}