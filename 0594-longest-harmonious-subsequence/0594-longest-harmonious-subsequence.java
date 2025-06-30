class Solution {
    public int findLHS(int[] nums) {
        Arrays.sort(nums);
        int max = nums[0], min = nums[0];
        int j = 0, maxLen = 0;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] - nums[j] > 1) {
                j++;
            }
            if (nums[i] - nums[j] == 1) {
                maxLen = Math.max(maxLen, i - j + 1);
            }
        }
        return maxLen;
    }
}