class Solution
{
public:
    long long dividePlayers(vector<int> &skill)
    {
        sort(skill.begin(), skill.end());

        long long ans = 0;
        int left = 0, right = skill.size() - 1;
        int memo = skill[left] + skill[right];

        while (left < right)
        {
            if (skill[right] + skill[left] != memo)
                return -1;
            ans += (skill[right--] * skill[left++]);
        }

        return ans;
    }
};