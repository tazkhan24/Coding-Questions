class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        vector<int> ans;
        int i =0, j = n.size()-1;
        while(i<j){
            if(n[i]+n[j] == t){
                ans.push_back(i+1);
                ans.push_back(j+1);
            }
                if(n[i]+n[j]<t)
                    i++;
                else
                    j--;
            }
        return ans;
        }
        
    
};