class Solution
{
public:
    bool isPalindrome(int n)
    {
        if (n < 0)
            return false;

        int number = n;
        int newNum = 0;

        while (n > 0)
        {
            int lastDigit = n % 10;
            newNum = newNum * 10 + lastDigit;
            n /= 10;
        }

        return newNum == number;
    }
};