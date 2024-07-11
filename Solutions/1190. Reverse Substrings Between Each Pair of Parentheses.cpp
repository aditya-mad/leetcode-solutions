class Solution
{
public:
    string reverseParentheses(string s)
    {
        int size = s.size();
        string ans = "";
        stack<int> memo;
        vector<int> ind(size);

        for (int i = 0, j; i < size; i++)
        {
            if (s[i] == '(')
                memo.push(i);
            else if (s[i] == ')')
            {
                j = memo.top();
                memo.pop();
                ind[i] = j, ind[j] = i;
            }
        }

        for (int i = 0, direction = 1; i < size; i += direction)
        {
            if (s[i] == '(' || s[i] == ')')
                direction = -direction, i = ind[i];
            else
                ans += s[i];
        }

        return ans;
    }
};