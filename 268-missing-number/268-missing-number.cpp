class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
               ans=i; 
                break;
            }
        }
        if(ans == -1)
            return nums.size();
        else
            return ans;
    }
};