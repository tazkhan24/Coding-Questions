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
    void f(TreeNode* root, int level, vector<int>& res){
        if(!root) return;
        if(res.size()==level) res.push_back(root->val);
        f(root->right,level+1,res);
        f(root->left,level+1,res);
    }
    
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        int level =0;
        f(root,level,ans);
        return ans;
    }
};