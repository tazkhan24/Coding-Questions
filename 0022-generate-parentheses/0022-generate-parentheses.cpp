class Solution {
public:
    vector<string> ans;
    void helper(int open, int close, int n, string temp){
        if(temp.length()==2*n){
            ans.push_back(temp);
            return;
        }
        if(open < n) 
            helper(open+1,close,n,temp+"(");
        if(close<open) 
            helper(open,close+1,n,temp+")");
    }
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return ans;
    }
};