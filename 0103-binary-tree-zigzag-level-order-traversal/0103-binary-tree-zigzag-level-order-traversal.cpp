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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        int flag =0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
        int len = q.size();
        vector<int> temp;
            
        for(int i=0;i<len;i++){
            
            TreeNode* node = q.front();
            q.pop();
            temp.push_back(node->val);
            
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
        }
            
            if(flag ==0){
            flag =1;
                ans.push_back(temp);
            }
            else{
                flag =0;
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }
        }
        return ans;
    }
};