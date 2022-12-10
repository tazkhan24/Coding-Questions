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
    long long mod = 1e9+7;
    long long sum =0;
    
    void totalSum(TreeNode* root){
        if(!root) return;
        
        
        totalSum(root->left);
        totalSum(root->right);
        sum+=root->val;
    }
    
    long maxproduct(TreeNode* root, long long& maxpro){
        if(root == NULL) return 0;
        
        long l = maxproduct ( root->left, maxpro);
        long r = maxproduct ( root->right, maxpro);
        
        long curr_sum = l + r + root -> val;
        
        long curr_pro = ( curr_sum * (sum - curr_sum) );
        
        if(maxpro < curr_pro)
            maxpro = curr_pro;
        
        return curr_sum;
    }
public:
    int maxProduct(TreeNode* root) {
        long long maxpro =1;
         
        totalSum(root);
        
        maxproduct(root,maxpro);
        
        return (maxpro%mod);

    }
};