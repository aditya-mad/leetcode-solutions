class Solution
{
public:
    vector<string> nums = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void pairs(string &digits, string temp, int letter, vector<string> &ans)
    {
        if (temp.size() == digits.size())
            ans.push_back(temp);
        else
        {
            for (auto x : nums[digits[letter] - '0'])
            {
                pairs(digits, temp + x, letter + 1, ans);
            }
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> ans;
        if (digits.size() == 0)
            return ans;
        else
            pairs(digits, "", 0, ans);
        return ans;
    }
};