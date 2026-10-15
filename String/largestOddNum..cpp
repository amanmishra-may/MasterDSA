class Solution
{
public:
    string largeOddNum(string &s)
    {
        int n = s.length();
        int i;
        string str;
        int lastDigit;
        for (i = n - 1; i > 0; i--)
        {
            if (s[i] % 2 != 0)
            {
                lastDigit = i;
                break;
            }
        }

        for (i = 0; i <= lastDigit; i++)
        {

            if (s[i] == '0')
            {
                continue;
            }
            str += s[i];
        }

        return str;
    }
};