class Solution {
    bool isequal(vector<int> p, vector<int> q){
        for(int i=0;i<p.size();i++){
            if(p[i]!=q[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> freqS1(26,0),freqS2(26,0);
        for(char s: s1) freqS1[s-'a']++;
        int i=0,j=0;
        while(j<s2.size()){
            freqS2[s2[j]-'a']++;
            if(j-i+1 == s1.size()){
                if(freqS1==freqS2) return true;
            }
            if(j-i+1<s1.size()) j++;
            else
            {
                freqS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};