class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.size() - 1;

        while (left < right)
        {
            if (isalnum(s[right]) && isalnum(s[left]))
            {
                if (tolower(s[right]) == tolower(s[left]))
                {
                    left++;
                    right--;
                }
                else
                {
                    return false;
                }
            }
            else if (!isalnum(s[right]))
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return true;
    }
};