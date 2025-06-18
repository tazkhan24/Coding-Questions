class Solution {
    public int[][] divideArray(int[] nums, int k) {
        int n = nums.length;
        Arrays.sort(nums);
        int[][] res = new int[n/3][3];
        int j = 0;
        for(int i=0; i< n-2; i+=3){
            if(nums[i+2] - nums[i] > k){
                return new int[][]{};
            }
            res[j][0] = nums[i];
            res[j][1] = nums[i+1];
            res[j][2] = nums[i+2];
            j++; 
        }
        return res;
    }
}