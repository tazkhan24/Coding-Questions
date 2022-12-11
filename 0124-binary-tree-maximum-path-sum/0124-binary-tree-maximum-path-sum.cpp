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
    int depth(TreeNode* root, int& maxi){
        if(!root) return 0;
        
        int l = max(0,depth(root->left,maxi));
        int r = max(0,depth(root->right,maxi));
        
        maxi = max(maxi, root->val+l+r);
        
        return root->val+max(l,r);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi =-1e9;
        depth(root,maxi);
        return maxi;
    }
};