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
    int sum1=0;
    int height(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(height(root->left), height(root->right));
    }
    int sum(TreeNode* root, int k){
        
        if(!root)
            return 0;
        if(k == 0)
            sum1+=root->val;
        sum(root->left, k-1);
        sum(root->right, k-1);
        return sum1;
         
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        int h = height(root);
        int sumNode = sum(root, h-1);
        return sumNode;
    }
};