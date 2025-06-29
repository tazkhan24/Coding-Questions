class Solution {
    public int numSubseq(int[] nums, int target) {
        int mod = 1000000007, n = nums.length;
        Arrays.sort(nums);
        int[] powOfTwo  = new int[n];
        powOfTwo[0] = 1;
        for(int i=1;i<n;i++){
            powOfTwo[i] = (powOfTwo[i-1] * 2) % mod;
        }
        int left = 0, right = n-1, result = 0;

        while(left <= right){
            if(nums[left] + nums[right] <= target){
                result = (result + powOfTwo[right - left]) % mod;
                left++;
                } else {
                    right--;
                }
            }
            return result;
        }
}