class Solution {
public:
    //Program to count index of last 1
    int count(vector<int> v){
        int l = 0, r = v.size()-1;
        while(l<=r){
            
        int mid=l+(r-l)/2;
            
        if(v[mid] == 0)
            r = mid-1;
        else
            l=mid+1;
        }
        return l;
    }
    
    
    
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        for(int i=0;i<mat.size();i++)
        {
            int cnt = count(mat[i]);
            
            pq.push(make_pair(cnt , i));
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        for(int i=0; i<k; i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};