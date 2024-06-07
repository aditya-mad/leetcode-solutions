class Solution
{
public:
    string replaceWords(vector<string> &dictionary, string sentence)
    {
        string ans = "";
        unordered_map<string, int> memo;
        int size = sentence.size();
        for (auto x : dictionary)
            memo[x]++;

        for (int i = 0; i < size; i++)
        {
            bool split = false;
            string curr = "", replace = "";
            while (i < size && sentence[i] != ' ')
            {
                curr += sentence[i++];
                if (memo[curr] > 0 && !split)
                    split = true, replace = curr;
            }

            if (split)
                ans += replace;
            else
                ans += curr;
            ans += " ";
        }

        ans.pop_back();
        return ans;
    }
};