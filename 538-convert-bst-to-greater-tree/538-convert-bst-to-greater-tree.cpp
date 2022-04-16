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
    TreeNode* convertBST(TreeNode* root) {
        
        int sum =0;
        NodeSum(root, sum);
        return root;
    }
    
    void NodeSum(TreeNode* root, int& sum){
        if(!root)
            return;
        NodeSum(root->right, sum);
        root->val+=sum;
        sum = root->val;
        
        NodeSum(root->left,sum);
    }
    
};