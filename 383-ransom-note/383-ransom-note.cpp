class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alp[26] = {};
        

        for(char c : magazine) 
            alp[c-'a']++;
        

        for(char c : ransomNote){
            if(!alp[c-'a']--)
                return false;
        }
        return true;
    }
};