class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        vector<bool> ans;
        int max= candies[0];
        int n = candies.size();
        for(int i=0;i<n;i++){
            if(candies[i]>max)
                max = candies[i];
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extra >= max){
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};