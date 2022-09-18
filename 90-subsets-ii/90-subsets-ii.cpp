class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;
    void subset(vector<int>& arr, int ind)
    {

            ans.push_back(ds);
       
        for(int i = ind;i<arr.size();i++){
            if(i != ind && arr[i]==arr[i-1])
                continue;
            ds.push_back(arr[i]);
            subset(arr,i+1);
            ds.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        subset(nums,0);
        return ans;
    }
};