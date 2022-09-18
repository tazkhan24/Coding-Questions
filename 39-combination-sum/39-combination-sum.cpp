class Solution {
public:
   vector<int> ds;
    vector<vector<int>> ans;
    
    void combination(vector<int>& arr,int i, int target){
        if(i==arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[i] <= target){
            ds.push_back(arr[i]);
            combination(arr,i,target-arr[i]);
            ds.pop_back();
        }
        combination(arr,i+1,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        combination(candidates,0,target);
        return ans;
    }
};