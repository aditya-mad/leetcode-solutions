class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>> req;
        int size1 = nums1.size(), size2 = nums2.size();
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                int sum = nums1[i] + nums2[j];
                if (req.size() < k)
                {
                    req.push({sum, {nums1[i], nums2[j]}});
                }
                else if (sum < req.top().first)
                {
                    req.pop();
                    req.push({sum, {nums1[i], nums2[j]}});
                }
                else
                {
                    break;
                }
            }
        }
        while (!req.empty())
        {
            ans.push_back(req.top().second);
            req.pop();
        }
        return ans;
    }
};