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
    void inOrder(TreeNode* node, vector<int>& nums) {
        if (!node) return;
        inOrder(node->left, nums);
        nums.push_back(node->val);
        inOrder(node->right, nums);
    }

    TreeNode* build(const vector<int>& nums, int l, int r) {
        if (l > r) return nullptr;
        int mid = (l+r) / 2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = build(nums, l, mid-1);
        node->right = build(nums, mid+1, r);
        return node;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        inOrder(root, nums);
        return build(nums, 0, (int)nums.size()-1);
    }
};