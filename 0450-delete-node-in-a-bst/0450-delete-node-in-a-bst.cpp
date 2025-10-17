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
    TreeNode* findMin(TreeNode* root) {
        if (root == NULL) {
            return root;
        } else if (root->left != NULL) {
            return findMin(root->left);
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL ) {
            return NULL;
        }

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        } else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else {    // Root val is to be deleted
            if (root->left == NULL && root->right == NULL) {
                delete(root);
                return NULL;
            } else if (root->left == NULL || root->right == NULL) {
                struct TreeNode* temp;
                if (root->left == NULL) {
                    temp = root->right;
                } else {
                    temp = root->left;
                }
                delete(root);
                return temp;
            } else {
                struct TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
        }
        return root;
    }
};