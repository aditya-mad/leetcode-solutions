class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        stack<int> memo;
        vector<int> ans;
        for (auto x : asteroids)
        {
            if (memo.empty())
            {
                memo.push(x);
            }
            else
            {
                while (true)
                {
                    if (memo.empty())
                    {
                        memo.push(x);
                        break;
                    }
                    else if (memo.top() > 0 && x < 0)
                    {
                        if (abs(x) > memo.top())
                            memo.pop();
                        else if (abs(x) == memo.top())
                        {
                            memo.pop();
                            break;
                        }
                        else
                            break;
                    }
                    else
                    {
                        memo.push(x);
                        break;
                    }
                }
            }
        }

        while (!memo.empty())
        {
            ans.push_back(memo.top());
            memo.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};