class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
    int i=0,j=n-1;
    int mx = 0,area;
    while(i<j)
    {
        area = min(h[i],h[j]) * (j-i);
        mx = max(mx,area);
        
        if(h[i] > h[j])
            j--;
        else
            i++;
    }
    return mx;
}
        
    
};