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
    vector<TreeNode*> generate(int from , int to){
        vector<TreeNode*> res;
        if(to-from < 0) res.push_back(0);
        if(to-from == 0) res.push_back(new TreeNode(from));
        if(to-from > 0){
            for(int i=from;i<=to;i++){
                vector<TreeNode*> l = generate(from,i-1);
                vector<TreeNode*> r = generate(i+1,to);
                
                for(int j=0;j<l.size();j++){
                    for(int k=0;k<r.size();k++){
                        TreeNode* h = new TreeNode(i);
                        h->left = l[j];
                        h->right = r[k];
                        res.push_back(h);
                    }
                }

            }
        }
        return res;
}
    vector<TreeNode*> generateTrees(int n) {
        return generate(1,n);
    }
};