class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int n = s.length();
        int i = 2;
        while(i<=n){
            if(n % i == 0){
                String chunk = s.substring(0, n/i);
                StringBuilder resultString = new StringBuilder();
                while(resultString.length() != n){
                    resultString.append(chunk);
                }
                if(resultString.toString().equals(s) ) return true;
                
            }
            i++;
        }
        return false;
    }

}