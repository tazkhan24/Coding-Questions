class Solution {
public:
    int jump(vector<int>& nums) {
        
        int jump =1, n = nums.size();
        int mxjmp = nums[0],curjmp=nums[0];
        int i=0;
        if(n==1)
            return 0;
        while(i<n-1){
            mxjmp = max(mxjmp, i+nums[i]);
            if(curjmp == i){
                jump++;
                curjmp = mxjmp;
            }
            i++;
        }
        return jump;
        
    }
};