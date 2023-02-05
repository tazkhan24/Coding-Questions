class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> ans;
        if(s2.size()<s1.size()) return ans;
        vector<int> freqS1(26,0),freqS2(26,0);
        for(char s: s1) freqS1[s-'a']++;
        int i=0,j=0;
        while(j<s2.size()){
            freqS2[s2[j]-'a']++;
            if(j-i+1 == s1.size()){
                if(freqS1==freqS2) ans.push_back(i);
            }
            if(j-i+1<s1.size()) j++;
            else
            {
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return ans;
    }
    
};