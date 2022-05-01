class Solution {
public:
    bool backspaceCompare(string s, string t) {
       stack<char> s1;
        stack<char> s2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !s1.empty())
                s1.pop();
            else if(s[i]!='#')
                s1.push(s[i]);
        }
        for(int i=0;i<t.size();i++){
            if(t[i]=='#' && !s2.empty())
                s2.pop();
            else if(t[i]!='#')
                s2.push(t[i]);
        }
        if(s1==s2)
            return true;
        else
            return false;
    }
};