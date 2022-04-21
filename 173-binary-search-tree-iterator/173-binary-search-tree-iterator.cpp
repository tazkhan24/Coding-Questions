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
class BSTIterator {
public:
    vector<int> v;
    int i;
    void inorder(TreeNode* root, vector<int>& v){
        if(!root)
            return;
        inorder(root->right, v);
        v.push_back(root->val);
        inorder(root->left, v);
    }
    BSTIterator(TreeNode* root) {
        inorder(root,v);
        i = v.size();
    }
    
    int next() {
        i--;
        return v[i];
        
    }
    
    bool hasNext() {
        if(i>0)
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */