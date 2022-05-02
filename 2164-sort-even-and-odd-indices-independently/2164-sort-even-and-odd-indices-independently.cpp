class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> vc;
        
        for(int i=0;i<nums.size();i+=2) 
            vc.push_back(nums[i]);
        
        sort(vc.begin(),vc.end());
        
        for(int i=0,j=0;i<nums.size();i+=2) 
            nums[i]=vc[j++];
        
        vc.clear();
        for(int i=1;i<nums.size();i+=2) 
            vc.push_back(nums[i]);
        
        sort(vc.begin(),vc.end(),greater<int>());
        
        for(int i=1,j=0;i<nums.size();i+=2)
            if(i%2!=0) 
                nums[i]=vc[j++];
        
        return nums;
    }
};