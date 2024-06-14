class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> ans;
        unordered_map<int, int> memo;
        for (auto x : arr1)
            memo[x]++;
        for (auto x : arr2)
            while (memo[x]--)
                ans.push_back(x);
        int size = *max_element(arr1.begin(), arr1.end());
        for (int i = 0; i <= size; i++)
            while (memo[i] > 0)
            {
                ans.push_back(i);
                memo[i]--;
            }
        return ans;
    }
};