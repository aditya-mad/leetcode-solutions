class Solution
{
public:
    string countOfAtoms(string formula)
    {
        map<string, int> memo;
        string ans = "", cf = "", cc = "";
        int p = 0, size = formula.size(), c = 0;

        stack<pair<string, int>> s, temp;

        for (int i = 0; i < size;)
        {
            if (formula[i] == '(')
            {
                p++;
                s.push({"(", 0});
                i++;
            }
            else if (formula[i] != ')')
            {
                cf = "";
                cf += formula[i++], cc = "";
                while (i < size && islower(formula[i]))
                    cf += formula[i++];
                while (i < size && isdigit(formula[i]))
                    cc += formula[i++];
                cc = cc == "" ? "1" : cc;
                s.push({cf, stoi(cc)});
            }
            else
            {
                cc = "";
                i++;
                temp = stack<pair<string, int>>();
                while (i < size && isdigit(formula[i]))
                    cc += formula[i++];
                cc = cc == "" ? "1" : cc;
                p--, c = stoi(cc);
                while (!s.empty() && s.top().first != "(")
                {
                    s.top().second *= c;
                    temp.push(s.top());
                    s.pop();
                }
                s.pop();
                while (!temp.empty())
                {
                    s.push(temp.top());
                    temp.pop();
                }
            }
        }

        while (!s.empty())
        {
            auto top = s.top();
            s.pop();
            memo[top.first] += top.second;
        }

        for (auto x : memo)
            ans += x.first + (x.second == 1 ? "" : to_string(x.second));

        return ans;
    }
};