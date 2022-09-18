class Solution {
public:
    vector<int> ds;
    vector<vector<int>> ans;
    void combination(vector<int>& arr,int ind, int target){
       
            if(target == 0){
                ans.push_back(ds);  return;
            }
           
        
        for(int i = ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1])
                continue;
            if(arr[i]>target) break;
                ds.push_back(arr[i]);
                combination(arr,i+1,target-arr[i]);
                ds.pop_back();
            
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        combination(candidates,0,target);
        return ans;
    }
};