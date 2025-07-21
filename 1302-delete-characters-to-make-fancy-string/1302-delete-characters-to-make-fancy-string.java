class Solution {
    public String makeFancyString(String s) {
        int cnt = 1;
        int n = s.length();
        StringBuilder res = new StringBuilder();
        for(int i=0;i<n;i++){
            if(i> 0 && s.charAt(i) == s.charAt(i-1)){
                cnt++;
            }else{
                cnt = 1;
            }
            if(cnt < 3){
                res.append(s.charAt(i));
            }
        }
        return res.toString();
    }
}