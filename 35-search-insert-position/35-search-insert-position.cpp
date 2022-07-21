class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int mid,l=0,r=n-1;
        if(target < nums[0])
        {
            return 0;
        }
        else
            if(target > nums[n-1])
            {
                return n;
            }
        while(l<=r)
        {
            mid = (l+r)/2;
            if(nums[mid] == target)
                return mid;
            else
            if(target> nums[mid])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        if(target<nums[l])
            return r+1;
        else
            return r-1;
    }
};