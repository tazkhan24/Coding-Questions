class Solution {
public:
    int numberOfSteps(int n) {
        int cnt =0;
        while(n!=0){
            if(n%2 == 0){
                n/=2;
                cnt++;
            }
            else{
                n-=1;
                cnt++;
            }
        }
        return cnt;
    }
};