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
    vector<int> ans;
    void traverse(TreeNode* root){
        if(!root) return;
        traverse(root->left);
        ans.push_back(root->val);
        traverse(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        sort(ans.begin(), ans.end());
        int left = 0;
        int right = ans.size()-1;
        while(right>left){
            if(ans[left]+ans[right]==k) return true;
            else if(ans[left]+ans[right] < k) left++;
            else right--;
        }
        return false;
    }
};