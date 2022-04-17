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
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode *head = new TreeNode(0), *pre =head;
        stack<TreeNode*> todo;
        while(root || !todo.empty()){
            while(root){
                todo.push(root);
                root=root->left;
            }
            root = todo.top();
            todo.pop();
            pre->right = root;
            pre = pre->right;
            root->left = NULL;
            root = root->right;
        }
        return head->right;
        
    }
};