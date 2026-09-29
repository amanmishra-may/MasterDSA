class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.length();
        string str;
        int i;

        for (i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                str += tolower(s[i]);
            }
        }

        int left = 0;
        int right = str.length() - 1;

        while (left < right)
        {
            if (str[left] != str[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};