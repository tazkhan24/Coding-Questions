class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& nums, int ind, vector<int> temp){
        if(ind == nums.size()){
            ans.push_back(temp);  
            return;
        }
        solve(nums,ind+1,temp);
        temp.push_back(nums[ind]);
        solve(nums, ind+1, temp);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums,0,temp);
        return ans;
    }
};