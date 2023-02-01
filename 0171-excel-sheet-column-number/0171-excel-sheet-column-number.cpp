class Solution {
public:
    int titleToNumber(string S) {
        int res =0;
        for(auto it: S){
            int d = it-'A'+1;
            res = res*26+d;
        }
        return res;
    }
};