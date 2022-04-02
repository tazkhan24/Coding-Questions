class Solution {
public:
    
    
    bool isPalindrome(string s) {

        int n = s.length();
        string str("");
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-1-i])
                return false;
        }
        return true;
    }
};