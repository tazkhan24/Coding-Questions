class Solution {
    public int minMaxDifference(int num) {
        String numStr = Integer.toString(num);
        char c = '9', c1 = '0';
        for(int i=0;i< numStr.length(); i++){
            if(numStr.charAt(i) != '9'){
               c = numStr.charAt(i);
               break;
            }
            
        }
        for(int i=0;i< numStr.length(); i++){
        if(numStr.charAt(i) != '0'){
               c1 = numStr.charAt(i);
               break;
            }
        }
        String max = numStr.replace(c, '9');
        String min = numStr.replace(c1, '0');

        return Integer.valueOf(max) - Integer.valueOf(min);

    }
}