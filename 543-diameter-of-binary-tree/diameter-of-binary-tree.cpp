class Solution {
public:
    int ans = 0;

    int height(TreeNode* root) {
        if (root == nullptr) return 0;

        int lh = height(root->left);
        int rh = height(root->right);

        // Update the maximum diameter found so far
        ans = max(ans, lh + rh);

        // Return the height of the current subtree to the parent
        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
