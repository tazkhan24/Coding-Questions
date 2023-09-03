class Solution {
public:
    int dp[101][101];
    int solver(int i, int j, int n, int m){
        if(i == n-1 && j==m-1)
            return 1;
        
        if(i>=n || j >= m)
            return 0;
        if(dp[i][j]!= -1)
            return dp[i][j];
        else
            return dp[i][j] = solver(i+1,j,n,m)+solver(i,j+1,n,m);
    }
    int uniquePaths(int m, int n) {
        
        memset(dp,-1,sizeof dp);
        int num = solver(0,0,m,n);
        if (m==1 && n==1)
            return num;
        return dp[0][0];
        
    }
};