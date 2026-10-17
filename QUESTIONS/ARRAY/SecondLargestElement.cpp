class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        int n = nums.size();
        int largest = nums[0];
        int slargest = Int_MIN;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > largest)
            {
                slargest = largest;
                largest = nums[i];
            }
            else if (nums[i] < largest && nums[i] > slargest)
            {
                slargest = nums[i];
            }
        }
        return slargest;
    }
};
