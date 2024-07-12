class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> memo(numCourses);
        vector<int> freq(numCourses, 0), remove;

        for (auto x : prerequisites)
            memo[x[1]].push_back(x[0]), freq[x[0]]++;
        for (int i = 0; i < numCourses; i++)
            if (freq[i] == 0)
                remove.push_back(i);
        for (int i = 0; i < remove.size(); i++)
            for (auto x : memo[remove[i]])
                if (--freq[x] == 0)
                    remove.push_back(x);

        return remove.size() == numCourses;
    }
};