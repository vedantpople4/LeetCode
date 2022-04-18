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
    vector<int> ans;
    void getinorder(TreeNode *root){
        if(root==NULL) return;
        getinorder(root->left);
        ans.push_back(root->val);
        getinorder(root->right);
    }
    public:
    int kthSmallest(TreeNode* root, int k) {
        getinorder(root);
        return ans[k-1];
    }
};