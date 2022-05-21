class Solution {
public:

    int uniquePaths(int m, int n) {
        vector<int> pre(n,1), curr(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                curr[j]= pre[j]+curr[j-1];
            }
            swap(pre,curr);
            
        }
        return pre[n-1];
    }
};