class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        ans = nums;
        /*for(int i=0;i<nums.size();i++){
            ans.push_back()
        }*/
        return ans;
    }
};