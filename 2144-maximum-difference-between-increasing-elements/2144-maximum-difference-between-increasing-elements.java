class Solution {
    public int maximumDifference(int[] nums) {
        int min = (int)1e9;
        int max = (int)-1e9;
        int flag = 0;
        for(int i = 0; i< nums.length; i++){
            min = Math.min(min, nums[i]);
            if(nums[i] > min){
                max = Math.max(max, nums[i] - min);
                flag = 1;
            }
        }
        if(flag == 0){
            return -1;
        }else{
            return max;
        }
    }
}