class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& arr, int ind){
        if(ind== arr.size()){
            ans.push_back(arr);
        }
        for(int i =ind; i<arr.size();i++ ){
            swap(arr[i],arr[ind]);
            solve(arr,ind+1);
            swap(arr[i],arr[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return ans;
        
    }
};