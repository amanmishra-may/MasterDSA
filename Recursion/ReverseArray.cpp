#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void ReverseArray(vector<int> &arr)
    {

        int n = arr.size();
        int p1 = 0;
        int p2 = n - 1;

        while (p1 < p2)
        {
            swap(arr[p1], arr[p2]);
            p1++;
            p2--;
        }
    }
};

int main()
{

    vector<int> arr = {5, 4, 3, 2, 1};
    Solution obj;
    obj.ReverseArray(arr);

    for (auto num : arr)
    {
        cout << num << endl;
    }

    return 0;
}
