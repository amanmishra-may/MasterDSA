#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void check_palindrome(string str)
    {
        int n = str.length();
        string str2(n, ' ');

        for (int i = 0; i < n; i++)
        {
            str2[i] = str[n - 1 - i];
        }
        if (str == str2)
        {
            cout << "Palindrome" << endl;
        }
        else
        {
            cout << "Not a Palindrome" << endl;
        }
    }
};

int main()
{

    string str = "ABCDCBA";
    Solution obj;
    obj.check_palindrome(str);

    return 0;
}