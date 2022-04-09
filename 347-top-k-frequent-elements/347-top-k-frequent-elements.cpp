class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {

            int n = nums.size();
            vector<int> ans;
            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>> > minh;

            unordered_map<int, int> mp;
            for (int i = 0; i < n; i++)
            {
                mp[nums[i]]++;
            }
            for (auto i: mp)
            {
                minh.push({ i.second,
                    i.first });
                if (minh.size() > k)
                    minh.pop();
            }
            for (int i = 0; i < k; i++)
            {

                ans.push_back(minh.top().second);
                minh.pop();
            }
            return ans;
        }
};