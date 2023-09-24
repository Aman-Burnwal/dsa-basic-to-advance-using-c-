class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int left = 0;
        int right = 0;
        int size = nums.size();

        while (left < size)
        {

            if (nums[left] != 0)
            {
                swap(nums[left], nums[right]);
                right++;
            }
            left++;
        }
    }
};