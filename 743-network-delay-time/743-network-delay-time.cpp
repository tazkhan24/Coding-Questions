class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dis(n+1, INT_MAX);
        dis[k]=0;
        for(int i=1;i<=n-1;i++){
            for(auto x: times){
                int u = x[0], v = x[1], wt = x[2];
                if(dis[u]!=INT_MAX && (dis[u]+wt) < dis[v]){
                    dis[v]= dis[u]+wt;
                }
            }
        }
        dis[0] = 0;
        int res = *max_element(dis.begin() , dis.end());
        return res < INT_MAX ? res : -1;
    }
};