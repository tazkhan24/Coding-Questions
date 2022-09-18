class Solution {
public:
   
    void combination(vector<int>& arr,int i,vector<int>& ds,vector<vector<int>>& ans, int target){
        if(i==arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            combination(arr,i,ds,ans,target-arr[i]);
            ds.pop_back();
        }
        combination(arr,i+1,ds,ans,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

         vector<int> ds;
        vector<vector<int>> ans;
        combination(candidates,0,ds,ans,target);
        return ans;
    }
};