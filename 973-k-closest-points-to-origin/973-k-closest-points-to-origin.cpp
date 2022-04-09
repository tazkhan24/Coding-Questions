class Solution
{
    public:
        vector<vector < int>> kClosest(vector<vector < int>> &points, int k)
        {
            int dist;
            int n = points.size();
            vector<vector < int>> ans;
            priority_queue<pair<int, pair<int, int>> > pq;
            for (int i = 0; i < n; i++)
            {
                dist = points[i][0] *points[i][0] + points[i][1] *points[i][1];
                pq.push({dist,
                {
                    points[i][0],
                    points[i][1] }});
                if (pq.size() > k)
                {
                    pq.pop();
                }
            }
            while (pq.size() > 0)
            {
                pair<int, int> p = pq.top().second;
                ans.push_back({p.first,p.second});
                pq.pop();
            }
            return ans;
        }
};