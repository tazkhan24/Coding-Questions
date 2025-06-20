class Solution {
    public int minimumOperations(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int[][] count = new int[n][10];
        //[[1,0,2],[1,0,2]]
        for(int j =0; j< n; j++){
            for(int i =0; i<m; i++){
                count[j][grid[i][j]]++;
            }
        }
        //count -> count[0][1] = 1
        //count -> count[0][2] = 1
        //count -> count[0][0] = 1 

        final int INF = 100_000_000;
        int[] dpPrev = new int[10], dpCurr = new int[10];
        for(int v =0; v < 10; v++){
            dpPrev[v] = m - count[0][v];
        }
        //dpPrev[0] = {1,1,1}
        // -> cost to make column 0 all v = 2 - count[0][v]
        for(int j =1; j<n; j++){
            for(int v =0; v < 10; v++){
                dpCurr[v] = INF;
                for(int u =0; u<10; u++){
                    if(u == v) continue;
                    dpCurr[v] = Math.min(dpCurr[v], dpPrev[u]);
                }
                dpCurr[v] += (m - count[j][v]);
            }
            System.arraycopy(dpCurr, 0, dpPrev, 0, 10);
        }
        int ans = INF;
        for(int v =0; v <10; v++){
            ans = Math.min(ans, dpPrev[v]);
        }
        return ans;
    }
}