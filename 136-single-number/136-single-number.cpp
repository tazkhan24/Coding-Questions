class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto s:map){
            if(s.second == 1)
                ans = s.first; 
        }
        return ans;
    }
};