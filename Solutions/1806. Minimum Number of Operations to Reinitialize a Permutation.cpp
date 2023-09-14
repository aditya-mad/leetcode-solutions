class Solution
{
public:
    int reinitializePermutation(int n)
    {
        vector<int> orig(n), perm(n), curr(n);
        int ans = 0, size = n;
        iota(orig.begin(), orig.end(), 1);
        perm = orig;

        while (n--)
        {
            for (int i = 0; i < size; i++)
            {
                if (i & 1)
                    curr[i] = perm[size / 2 + (i - 1) / 2];
                else
                    curr[i] = perm[i / 2];
            }
            ans++;
            if (curr == orig)
                break;
            perm = curr;
        }

        return ans;
    }
};