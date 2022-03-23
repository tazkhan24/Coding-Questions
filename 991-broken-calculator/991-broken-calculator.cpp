class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int res = 0;
        if(startValue == target)
            return 0;
        while(target > startValue)
        {
            res++;
            if(target % 2 == 0){
                target/=2;
            }
            else
            {
                target++;
            }
        }
        res=res+(startValue-target);
        return res;
    }
};