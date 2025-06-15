class Solution {
    public int maxDiff(int num) {
        String numStr = Integer.toString(num);
        char c = '9', c1 = '0';
        for (int i = 0; i < numStr.length(); i++) {
            if (numStr.charAt(i) != '9') {
                c = numStr.charAt(i);
                break;
            }
        }
        String min = numStr;
        for (int i = 0; i < numStr.length(); i++) {
            if (i == 0 && numStr.charAt(i) != '1') {
                c1 = numStr.charAt(i);
                min = numStr.replace(c1, '1');
                break;
            } 
            if(i != 0 && numStr.charAt(i) > '1'){
                c1 = numStr.charAt(i);
                min = numStr.replace(c1, '0');
                break;
            }

        }
        String max = numStr.replace(c, '9');
        return Integer.valueOf(max) - Integer.valueOf(min);
    }
}