class Solution {
    int f(int n,vector<int>& cost, vector<int>&dp){
            
    if(n<=1){
         return dp[n]= cost[n];
    }
        
    int first,second;
        
    if(dp[n]!=-1)
        return dp[n];
    
    first = f(n-1,cost,dp);

    second = f(n-2,cost,dp);
       

    return dp[n]= cost[n]+min(first,second);

}
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n = cost.size();
        vector<int> dp(n+1,-1);
       return min(f(n-1,cost, dp), f(n-2,cost, dp));
    }
};