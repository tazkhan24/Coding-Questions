class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        for(int i = s.length()-1;i>=0;i--){
            if(s[i] == ' ' && cnt ==0){
                continue;
            }
            if(s[i] != ' ')
                cnt++;
            else
                break;
        }
        return cnt;
    }
};